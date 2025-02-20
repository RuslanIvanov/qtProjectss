#ifndef BRPM_ENCODER_H
#define BRPM_ENCODER_H

#include <cstdint>
#include <linux/can.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class BRPM_Encoder
{
public:
	//Длина полезной нагрузки
	static const uint8_t MCP_BRP_Init_lenght	= 1 + sizeof (uint32_t);
	static const uint8_t MCP_BRP_State_lenght	= 11;
	static const uint8_t MCP_BRP_Req_lenght		= 17;
	static const uint8_t MCP_BRP_Ack_lenght		= 17;

	static const uint8_t BRP_MCP_CP_max_lenght		= 56;

	enum MCP_BRP_MessType
	{
		MCP_BRP_Init,
		MCP_BRP_State,
		MCP_BRP_Req,
		MCP_BRP_Ack,
		MCP_BRP_VarLen,
		BRP_MCP_CP
	};

	enum BRP_Channel
	{
		BRP_Channel_I = 1,
		BRP_Channel_II,
		BRP_Channel_III
	};

	struct header
	{
		uint8_t n_frame:	4;
		uint8_t n_message:	4;
	} __attribute__((aligned(1)));

	struct less_than_CanId
	{
		inline bool operator() (const can_frame& cf1, const can_frame& cf2)
		{
			return (cf1.can_id < cf2.can_id);
		}
	};
	struct equal_CanId
	{
		uint16_t Id;
		equal_CanId(uint16_t id) : Id(id) {}
		inline bool operator() (const can_frame& cf)
		{
			return (cf.can_id == Id);
		}
	};

public:
	BRPM_Encoder();
	void update(MCP_BRP_MessType type, std::vector<uint8_t> data);
	const std::vector<can_frame>& getFrames();
    uint8_t getSentNmessage() const { return N_message; }
    uint8_t getRcvNmessage() const { return n_message_rcv; }
	void init(bool switchon, uint8_t n_channel, uint32_t id_train);
	const std::vector<uint8_t> *addInFrame(const can_frame&);
    bool isInFrame(const can_frame&) const;

private:
	static uint8_t N_message;									//!< Инк.счетчик сообщений
    static uint8_t n_message_rcv;                               //!< Инк.счетчик сообщений SA
	uint8_t N_frame;											//!< Дек.счетчик фреймов
	std::vector<can_frame> frames2send;							//!< вектор с фреймами по формату протокола
	std::vector<can_frame> in_frames;							//!< вектор с полученными фреймами по формату протокола
	const uint8_t N_payload;									//!< кол-во передаваемых данных в фрейме
	std::vector<uint16_t> canId_MCP_BRP_Init;					//!< Can Id для Сообщение ПА — СА
	std::vector<uint16_t> canId_MCP_BRP_State;					//!< Can Id для Сообщение ПА — СА
	std::vector<uint16_t> canId_MCP_BRP_Req;					//!< Can Id для Сообщение ПА — СА
	std::vector<uint16_t> canId_MCP_BRP_Ack;					//!< Can Id для Сообщение ПА — СА
	std::vector<uint16_t> canId_MCP_BRP_VarLen;					//!< Can Id для Сообщение ПА — СА
	std::vector<uint16_t> canId_BRP_MCP;						//!< Can Id для Сообщение СА — ПА
	std::vector<uint8_t> in_data;								//!< Сырое сообщение СА — ПА
};

#endif // BRPM_ENCODER_H
