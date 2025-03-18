#include "Transport.h"
#include <iostream>
#include <string>


void setupConsole() {
#ifdef _WIN32 // если windows
    #include <windows.h>
    SetConsoleOutputCP(CP_UTF8); // вывод utf 8
    SetConsoleCP(CP_UTF8);      // ввод utf 8
#endif
    // Настраиваем локаль для wcout
    std::wcout.imbue(std::locale(""));
}

int main(int argc, char* argv[]) {
    setupConsole();

    if (argc != 2) {
        std::wcout << L"Использование: " << argv[0] << L" <типы транспорта>\n";
        std::wcout << L"Типы: 0 - мотоцикл, 1 - самокат, 2 - автомобиль, 3 - автобус\n";
        return 1;
    }

    TransportFactory factory;
    std::string types = argv[1];

    for (char type : types) {
        Transport* transport = factory.createTransport(type);
        if (transport) {
            std::wcout << transport->getInfo() << L"\n";
            delete transport;
        } else {
            std::wcout << L"НЕИЗВЕСТНЫЙ ТИП ТРАНСПОРТА: " << type << L"\n\n";
        }
    }

    return 0;
}
