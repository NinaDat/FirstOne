#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle(int weight) : Weight(weight) { Count++; };
    virtual ~Vehicle() { Count--; };
    virtual void MaxSpeed() const = 0;
    virtual void Seats() const = 0;
    static int Count;
private:
    int Weight;
};

class Car : public Vehicle
{
public:
    Car(int weight) : Vehicle(weight) { Weight = weight; };
    virtual ~Car() {};
    virtual void MaxSpeed() const { cout << "The max speed of the car is 200 kilometers per hour"; }
    //virtual void Seats() const { cout << "The car has a seating capacity of four"; } - Зробити клас Car не ADT
private:
    int Weight;
};

class Bus : public Vehicle
{
public:
    Bus(int weight) : Vehicle(weight) { Weight = weight; };
    virtual ~Bus() {};
    virtual void MaxSpeed() const { cout << "The max speed of the bus is 100 kilometers per hour"; }
    virtual void Seats() const { cout << "The bus has a seating capacity of fourty"; }
private:
    int Weight;
};

class SportsCar : public Car
{
public:
    SportsCar(int weight) : Car(weight) { Weight = weight; };
    virtual ~SportsCar() {};
    virtual void MaxSpeed() const { cout << "The max speed of the sport car is 300 kilometers per hour"; }
    virtual void Seats() const { cout << "The sport car has a seating capacity of two"; }
private:
    int Weight;
};

class Wagon : public Car
{
public:
    Wagon(int weight) : Car(weight) { Weight = weight; };
    virtual ~Wagon() {};
    virtual void MaxSpeed() const { cout << "The max speed of the wagon is 90 kilometers per hour"; }
    virtual void Seats() const { cout << "The wagon has a seating capacity of three"; }
private:
    int Weight;
};

class Coupe : public Car
{
public:
    Coupe(int weight) : Car(weight) { Weight = weight; };
    virtual ~Coupe() {};
    virtual void MaxSpeed() const { cout << "The max speed of the coupe is 150 kilometers per hour"; }
    virtual void Seats() const { cout << "The coupe has a seating capacity of two"; }
private:
    int Weight;
};

int Vehicle ::Count = 0;

int main()
{
    Bus BusOne(10);
    SportsCar SportsCarTwo(2);
    Wagon WagonThree(4);
    Coupe Coupe(1);
    cout << "Number of vehicle are " << Vehicle::Count << ".\n";
    return 0;
}
