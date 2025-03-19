#include "Transport.h"
#include <iostream>
#include <string>


void setupConsole() {
#ifdef _WIN32 // если windows
<<<<<<< HEAD
#include <windows.h>
=======
    #include <windows.h>
>>>>>>> 79a986849a32fa3aeb412d50d3127c7d89a4abeb
    SetConsoleOutputCP(CP_UTF8); // вывод utf 8
    SetConsoleCP(CP_UTF8);      // ввод utf 8
#endif
    // Настраиваем локаль для wcout
    std::cout.imbue(std::locale(""));
}

int main(int argc, char* argv[]) {
    setupConsole();

    if (argc != 2) {
        std::cout << "Использование: " << argv[0] << " <типы транспорта>\n";
        std::cout << "Типы: 0 - мотоцикл, 1 - самокат, 2 - автомобиль, 3 - автобус\n";
        return 1;
    }

    TransportFactory factory;
    std::string types = argv[1];

    for (char type : types) {
        Transport* transport = factory.createTransport(type);
        if (transport) {
            std::cout << transport->getInfo() << "\n";
            delete transport;
        } else {
            std::cout << "НЕИЗВЕСТНЫЙ ТИП ТРАНСПОРТА: " << type << "\n\n";
        }
    }

    return 0;
}
