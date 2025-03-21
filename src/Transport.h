#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>

class Transport {
public:
    virtual ~Transport() {} // виртуальный деструктор
    virtual std::string getInfo() const = 0; // информация о транспорте
protected:
    std::string name;     // общее свойство: название
    int wheels;           // общее свойство: кол-во колес
    int maxSpeed;         // общее свойство: максимальная скорость
};

class Motorcycle : public Transport {
public:
    Motorcycle(); // конструктор
    std::string getInfo() const override;
};

class Scooter : public Transport {
public:
    Scooter();
    std::string getInfo() const override;
};

class Car : public Transport {
public:
    Car();
    std::string getInfo() const override;
};

class Bus : public Transport {
public:
    Bus();
    std::string getInfo() const override;
private:
    int maxPassengers; // уникальное свойство автобуса
};

class TransportFactory {
public:
    Transport* createTransport(char type) const; // создание транспорта
};

#endif // TRANSPORT_H