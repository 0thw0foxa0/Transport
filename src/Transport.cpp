#include "Transport.h"

std::wstring Motorcycle::getInfo() const {
    return "Наименование транспорта: мотоцикл\n"
           "Кол-во колес: 2\n"
           "Максимальная скорость: 120км/ч\n";
}

std::wstring Scooter::getInfo() const {
    return "Наименование транспорта: самокат\n"
           "Кол-во колес: 2\n"
           "Максимальная скорость: 25км/ч\n";
}

std::wstring Car::getInfo() const {
    return "Наименование транспорта: автомобиль\n"
           "Кол-во колес: 4\n"
           "Максимальная скорость: 150км/ч\n";
}

std::wstring Bus::getInfo() const {
    return "Наименование транспорта: автобус\n"
           "Кол-во колес: 6\n"
           "Максимальная скорость: 100км/ч\n"
           "Максимальное количество пассажиров: 20\n";
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