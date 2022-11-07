#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int age;
    int cash;
public:
    Person(string name, int age, int cash);
    void Hello()
    {
        cout << "Hello, I'm " << this->name << endl;
    }
};

Person::Person(string name, int age, int cash)
{
    this->name = name;
    this->age = age;
    this->cash = cash;
}


class Brand
{
private:
    string name;
    int yearOfFoundation;
    double stockValue;

public:
    Brand()
    {
        
    }
    Brand(string name, int yearOfFoundation, double stockValue)
    {
        this->name = name;
        this->yearOfFoundation = yearOfFoundation;
        this->stockValue = stockValue;
    }
};


class Vehicle
{
private:
    Brand brand;
    string name;
    int productionDate;
    int weight;
    int power;
    float acceleration;
    float maxSpeed;
    string owner;
public:
    Vehicle(Brand brand, string name, int productionDate, int weight, int power, float acceleration, float maxSpeed, string owner)
    {
        this->brand = brand;
        this->name = name;
        this->productionDate = productionDate;
        this->weight = weight;
        this->power = power;
        this->acceleration = acceleration;
        this->maxSpeed = maxSpeed;
        this->owner = owner;
    }    
    void Buying(string newOwner)
    {
        this->owner = newOwner;
        
    }
};


int main()
{
    

    return 0;
}