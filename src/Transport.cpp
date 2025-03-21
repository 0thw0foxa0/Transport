#include "Transport.h"
#include <sstream>

Motorcycle::Motorcycle() {
    name = "мотоцикл";
    wheels = 2;
    maxSpeed = 120;
}

std::string Motorcycle::getInfo() const {
    std::ostringstream oss;
    oss << "Наименование транспорта: " << name << "\n"
        << "Кол-во колес: " << wheels << "\n"
        << "Максимальная скорость: " << maxSpeed << "км/ч\n";
    return oss.str();
}

Scooter::Scooter() {
    name = "самокат";
    wheels = 2;
    maxSpeed = 25;
}

std::string Scooter::getInfo() const {
    std::ostringstream oss;
    oss << "Наименование транспорта: " << name << "\n"
        << "Кол-во колес: " << wheels << "\n"
        << "Максимальная скорость: " << maxSpeed << "км/ч\n";
    return oss.str();
}

Car::Car() {
    name = "автомобиль";
    wheels = 4;
    maxSpeed = 150;
}

std::string Car::getInfo() const {
    std::ostringstream oss;
    oss << "Наименование транспорта: " << name << "\n"
        << "Кол-во колес: " << wheels << "\n"
        << "Максимальная скорость: " << maxSpeed << "км/ч\n";
    return oss.str();
}

Bus::Bus() {
    name = "автобус";
    wheels = 6;
    maxSpeed = 100;
    maxPassengers = 20;
}

std::string Bus::getInfo() const {
    std::ostringstream oss;
    oss << "Наименование транспорта: " << name << "\n"
        << "Кол-во колес: " << wheels << "\n"
        << "Максимальная скорость: " << maxSpeed << "км/ч\n"
        << "Максимальное количество пассажиров: " << maxPassengers << "\n";
    return oss.str();
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