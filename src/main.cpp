#include "Transport.h"
#include <iostream>
#include <string>


#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif


int main(int argc, char* argv[]) 
{
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // вывод utf-8 для windows
    SetConsoleCP(CP_UTF8); // ввод utf-8 для windows
    #endif

    if (argc != 2) 
    {
        std::cout << "Использование: " << argv[0] << " <типы транспорта>\n";
        std::cout << "Типы: 0 - мотоцикл, 1 - самокат, 2 - автомобиль, 3 - автобус\n";
        return 1;
    }

    TransportFactory factory;
    std::string types = argv[1];

    for (char type : types) 
    {
        Transport* transport = factory.createTransport(type);
        if (transport) 
        {
            std::cout << transport->getInfo() << "\n";
            delete transport;
        } 
        else 
        {
            std::cout << "НЕИЗВЕСТНЫЙ ТИП ТРАНСПОРТА: " << type << "\n\n";
        }
    }

    return 0;
}
