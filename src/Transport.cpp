#include "Transport.h"

std::wstring Motorcycle::getInfo() const {
    return L"Наименование транспорта: мотоцикл\n"
           L"Кол-во колес: 2\n"
           L"Максимальная скорость: 120км/ч\n";
}

std::wstring Scooter::getInfo() const {
    return L"Наименование транспорта: самокат\n"
           L"Кол-во колес: 2\n"
           L"Максимальная скорость: 25км/ч\n";
}

std::wstring Car::getInfo() const {
    return L"Наименование транспорта: автомобиль\n"
           L"Кол-во колес: 4\n"
           L"Максимальная скорость: 150км/ч\n";
}

std::wstring Bus::getInfo() const {
    return L"Наименование транспорта: автобус\n"
           L"Кол-во колес: 6\n"
           L"Максимальная скорость: 100км/ч\n"
           L"Максимальное количество пассажиров: 20\n";
}

Transport* TransportFactory::createTransport(char type) const {
    switch (type) {
        case '0': return new Motorcycle();
        case '1': return new Scooter();
        case '2': return new Car();
        case '3': return new Bus();
        default:  return nullptr;
    }
}