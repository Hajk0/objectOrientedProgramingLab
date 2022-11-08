#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int age;
    int cash;

public:
    Person(string name, int age, int cash)
    {
        this->name = name;
        this->age = age;
        this->cash = cash;
    }
    string hello()
    {
        return "Hello, I'm " + this->name;
    }

};



class Brand
{
private:
    string name;
    int yearOfFoundation;
    double stockValue;

public:
    Brand(string name, int yearOfFoundation, double stockValue)
    {
        this->name = name;
        this->yearOfFoundation = yearOfFoundation;
        this->stockValue = stockValue;
    }

    string brandName()
    {
        return name;
    }
};


class Vehicle
{
private:
    Brand *brand;
    string name;
    int productionDate;
    int power;
    float maxSpeed;
    long price;
    Person *owner;
public:
    Vehicle(Brand *brand, string name, int productionDate, int power, float maxSpeed, long price, Person *owner)
    {
        this->brand = brand;
        this->name = name;
        this->productionDate = productionDate;
        this->power = power;
        this->maxSpeed = maxSpeed;
        this->price = price;
        this->owner = owner;
    }    
    
    string carPrice()
    {
        return "The price of " + this->brand->brandName() + " " + this->name + " is: " + to_string(this->price);
    }

    void changingOwner(Person *newOwner)
    {
        this->owner = newOwner;
    }

    void info()
    {
        cout << "Brand name: " << brand->brandName() << "\nModel name: " << this->name << "\nProduction date: " << this->productionDate << endl;
        cout << "Horse power: " << this->power << "\nMax speed: " << this->maxSpeed << "\nPrice: " << this->price << endl;
    }

    void helloOwner()
    {
        cout << this->owner->hello() << ", owner of this car." << endl;
    }
};


int main()
{
    Person person0 = Person("Witek", 21, 5);
    Person person1 = Person("Kuba", 20, 10);
    Brand brand0 = Brand("Audi", 1976, 20000000);
    Vehicle vehicle0 = Vehicle(&brand0, "RS5", 2021, 320, 390, 500000, &person0);

    vehicle0.info();
    cout << vehicle0.carPrice() << endl;
    vehicle0.changingOwner(&person1);
    vehicle0.helloOwner();


    return 0;
}