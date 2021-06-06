#include "brpm_encoder.h"
 #include <string.h>

uint8_t BRPM_Encoder::N_message;									//!< Инк.счетчик сообщений
uint8_t BRPM_Encoder::n_message_rcv;                               //!< Инк.счетчик сообщений SA

//Длина полезной нагрузки
const uint8_t BRPM_Encoder::MCP_BRP_Init_lenght;
const uint8_t BRPM_Encoder::MCP_BRP_State_lenght;
const uint8_t BRPM_Encoder::MCP_BRP_Req_lenght;
const uint8_t BRPM_Encoder::MCP_BRP_Ack_lenght;


BRPM_Encoder::BRPM_Encoder() : N_frame(0), N_payload(7)
{
	//Can Id для Сообщение ПА — СА
	canId_MCP_BRP_Init.push_back(0x270);
	canId_MCP_BRP_State.push_back(0x271);
	canId_MCP_BRP_State.push_back(0x272);
	canId_MCP_BRP_Req.push_back(0x273);
	canId_MCP_BRP_Req.push_back(0x370);
	canId_MCP_BRP_Req.push_back(0x371);
	canId_MCP_BRP_Ack.push_back(0x372);
	canId_MCP_BRP_Ack.push_back(0x373);
	canId_MCP_BRP_Ack.push_back(0x470);
	//
	canId_MCP_BRP_VarLen.push_back(0x271);
	canId_MCP_BRP_VarLen.push_back(0x272);
	canId_MCP_BRP_VarLen.push_back(0x273);
	canId_MCP_BRP_VarLen.push_back(0x370);
	canId_MCP_BRP_VarLen.push_back(0x371);
	canId_MCP_BRP_VarLen.push_back(0x372);
	canId_MCP_BRP_VarLen.push_back(0x373);
	canId_MCP_BRP_VarLen.push_back(0x470);

	//Can Id для Сообщение СА — ПА
	canId_BRP_MCP.push_back(0x1F0);
	canId_BRP_MCP.push_back(0x1F1);
	canId_BRP_MCP.push_back(0x1F2);
	canId_BRP_MCP.push_back(0x1F3);
	canId_BRP_MCP.push_back(0x2F0);
	canId_BRP_MCP.push_back(0x2F1);
	canId_BRP_MCP.push_back(0x2F2);
	canId_BRP_MCP.push_back(0x2F3);
}

void BRPM_Encoder::init(bool switchon, uint8_t n_channel, uint32_t id_train)
{
	//Подготовить к заполнению новыми данными
	frames2send.clear();

	//Фрейм для добавления в вектор для передачи
	can_frame cf;

	//can Id взять по порядку из контейнера
	cf.can_id	= canId_MCP_BRP_Init.at(0);
	bzero(cf.data, 8);
	cf.can_dlc = 2 + sizeof (uint32_t);

	cf.data[0] = 0;

	uint8_t d = n_channel > 3 ? 3 : n_channel;
	d |= (switchon << 7);
	cf.data[1] = d;

	//Id поезда
	uint8_t* id = reinterpret_cast<uint8_t*>(&id_train);
	for(unsigned int i=0; i < sizeof (uint32_t); i++)
	{
		cf.data[2 + i] = *(id + i);
		std::cout << __PRETTY_FUNCTION__ << " i " << i << std::hex << +int8_t(cf.data[2 + i]) << endl;
	}

	//Добавить сформированный фрейм в вектор
	frames2send.push_back(cf);
}

/// Обновление данных в векторе фреймов для передачи БРПМ
void BRPM_Encoder::update(MCP_BRP_MessType type, std::vector<uint8_t> data)
{
	if(type != MCP_BRP_State && type != MCP_BRP_Req && type != MCP_BRP_Ack && type != MCP_BRP_VarLen && type != BRP_MCP_CP)
	{
		std::cout << __PRETTY_FUNCTION__ << " Wrong type!\n";
		return;
	}

	//Выбор контейнера с Can Id в зависимости от типа сообщений
	std::vector<uint16_t>& canId_MCP_BRP(type == MCP_BRP_State ? canId_MCP_BRP_State
															   : type == MCP_BRP_Req ? canId_MCP_BRP_Req :
																					   type == MCP_BRP_Ack ? canId_MCP_BRP_Ack :
																											 type == MCP_BRP_VarLen ? canId_MCP_BRP_VarLen : canId_BRP_MCP );
	uint8_t full_frames = data.size() / N_payload;				//заполненных фреймов
	uint8_t tail_bytes = data.size() % N_payload;				//занятых байт в последнем фрейме
	uint8_t total_frames = full_frames + (tail_bytes ? 1 : 0);	//всего используемых фреймов

	//Подготовить к заполнению новыми данными
	frames2send.clear();

	//Инициализация Дек.счетчик фреймов
	N_frame =  total_frames - 1;

	//Счетчик скопированных данных
	std::size_t i_data = 0;

	//Фрейм для добавления в вектор для передачи
	can_frame cf;

	//Заполнение фреймов данными
	for(int i = 0; i < total_frames; i++)
	{
		//can Id взять по порядку из контейнера
		cf.can_id	= canId_MCP_BRP.at(i);
		bzero(cf.data, 8);

		//Заполнить data
		for(int j = 0; i_data < data.size() && j < 8; j++)
		{
			//Заголовок
			if(j == 0)
			{
				header h = {0, 0};
				//Дек.счетчик фреймов
				h.n_frame = N_frame--;
				cf.data[j] = *reinterpret_cast<uint8_t*>(&h);
			} else
			{
				cf.data[j] = data.at(i_data);
				i_data++;
			}

			cf.can_dlc	= j + 1;
		}

        //Выровнять последний фрейм до 8 байт
        if(cf.can_dlc != 8)
        {
            bzero(cf.data + (8 - cf.can_dlc - 1), 8 - cf.can_dlc);
            cf.can_dlc = 8;
        }

		//Добавить сформированный фрейм в вектор
		frames2send.push_back(cf);

//		for(std::vector<can_frame>::size_type i=0; i < frames2send.size(); i++)
//			std::cout << __PRETTY_FUNCTION__ << " i " << i << std::hex << " frames2send.can_id " << frames2send.at(i).can_id << endl;
	}
}

//Установить Инк.счетчик сообщений и возвратить вектор фреймов для передачи
const std::vector<can_frame>& BRPM_Encoder::getFrames()
{
	for( std::size_t i = 0; i < frames2send.size(); i++)
	{
		header h = *reinterpret_cast<header*>(&frames2send.at(i).data[0]);
		h.n_message = N_message;
		frames2send[i].data[0] = *reinterpret_cast<uint8_t*>(&h);
	}

	//Инкремент
	N_message++;

//	for(std::vector<can_frame>::size_type i=0; i < frames2send.size(); i++)
//		std::cout << __PRETTY_FUNCTION__ << " i " << i << std::hex << " frames2send.can_id " << frames2send.at(i).can_id << endl;

	return frames2send;
}

///Добавление полученных фреймов и выделение передаваемых данных их них
const std::vector<uint8_t> *BRPM_Encoder::addInFrame(const can_frame& cf)
{
	//Фильтрация
	if( std::find(canId_BRP_MCP.begin(), canId_BRP_MCP.end(), cf.can_id) == canId_BRP_MCP.end())
		return  0;

	//Кол-во фреймов в сообщении
	static uint8_t max_dec_counter;

	//Добавить фрейм, если еще нет
	equal_CanId eId(cf.can_id);
	if( std::find_if(in_frames.begin(), in_frames.end(), eId) == in_frames.end())
	{
		in_frames.push_back(cf);

		//Дек.счетчик фреймов
		uint8_t dec_counter = cf.data[0] & 0x0F;

		//
		max_dec_counter = max_dec_counter < dec_counter ? dec_counter : max_dec_counter;


		//Не собраны все фреймы, если Дек.счетчик фреймов не ноль
		if(dec_counter)
			return 0;
	}

	//Все фреймы собраны
//	if(in_frames.size() == canId_BRP_MCP.size())
	{
		//Сортировка, если пришли в порядке, отличном от записанного порядка в контейнере с CanId
		std::sort(in_frames.begin(), in_frames.end(), less_than_CanId());

		//Дек. номер фрейма
		header h = {0,0};
		uint8_t n_frame = in_frames.size() - 1;
		//Подготовить контейнер
		in_data.clear();
		//Разбор по протоколу БРПМ
		for(std::size_t i = 0; i < in_frames.size(); i++)
		{
			can_frame frame = in_frames.at(i);
			for(int j = 0; j < frame.can_dlc; j++)
			{
				//Заголовок
				if(j == 0)
				{
                    //Проверка счетчиков
                    h = *reinterpret_cast<header*>(&frame.data[0]);
                    if(h.n_frame != n_frame)
                    {
                        std::cout << __PRETTY_FUNCTION__ << " Incorrect decrement frame counter! " << std::hex << +h.n_frame << " must " << +n_frame << " id " << frame.can_id << std::endl;
                    }
                    n_frame--;
                    if(h.n_message != n_message_rcv)
                    {
//                        std::cout << __PRETTY_FUNCTION__ << " Incorrect increment message counter! " << std::hex << +h.n_message << " must " << +n_message_rcv << " id " << frame.can_id << std::endl;
                    }
				} else
					//Собрать данные в контейнер
				{
					in_data.push_back(frame.data[j]);
				}
			}
		}
		//Порядковый номер сообщения
        n_message_rcv++;

		//Подготовить контейнер
		in_frames.clear();

		//Вернуть данные для дальнейшего использования
		return &in_data;
	}
	return 0;
}

bool BRPM_Encoder::isInFrame(const can_frame& cf) const
{
    if( std::find(canId_BRP_MCP.begin(), canId_BRP_MCP.end(), cf.can_id) != canId_BRP_MCP.end())
        return  true;
    else
        return false;
}


