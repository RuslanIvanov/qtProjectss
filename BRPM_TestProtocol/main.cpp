#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    //Вывод информации о версии
    if((argc == 2)&&(std::string(argv[1]) == "-v"))
    {
        cout << "Branch: " << BRANCH << endl;
        cout<<"BUILD_DATE: "<<BUILD_DATE << endl;
        cout<<"REVISION: "<<REVISION << endl;
        cout<<"SOURCES_STATUS: "<<SOURCES_STATUS << endl;
        cout<<"GIT_LOG: "<<GIT_LOG << endl;
        exit(0);
    }

	QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/favicon.ico"));
	MainWindow w;
	w.show();

	return a.exec();
}
