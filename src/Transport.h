#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>

class Transport {
public:
    virtual ~Transport() {} // виртуальный деструктор
    virtual std::wstring getInfo() const = 0; //wstring для Unicode
};

class Motorcycle : public Transport {
public:
    std::wstring getInfo() const override;
};

class Scooter : public Transport {
public:
    std::wstring getInfo() const override;
};

class Car : public Transport {
public:
    std::wstring getInfo() const override;
};

class Bus : public Transport {
public:
    std::wstring getInfo() const override;
};

class TransportFactory {
public:
    Transport* createTransport(char type) const;
};

#endif // TRANSPORT_H