#include <iostream>
#include <string>

using namespace std;

class Person
{
    public:
        int age;
        string name;
        string hairColor;
        
        Person(int age, string name, string hairColor)
        {
            this->age = age;
            this->name = name;
            this->hairColor = hairColor;
        }
        
        void Sound()
        {
            cout << "Siemano" << endl;
        }
};

class Dog
{
    public:
        int age;
        string name;
        string color;
        Person *owner;
    
        Dog(int age, string name, string color, Person owner)
        {
            this->age = age;
            this->name = name;
            this->color = color;
            this->owner = &owner;
        }

        void Sound()
        {
            cout << "Wof" << endl;
        }

};

class Cat
{
    public:
        int age;
        string name;
        string color;
        Person *owner;

        Cat(int age, string name, string color, Person owner)
        {
            this->age = age;
            this->name = name;
            this->color = color;
            this->owner = &owner;
        }
        
        void Sound()
        {
            cout << "Meow" << endl;
        }
};



int main()
{
    Person person0 = Person(21, "Witek", "Brown");
    Dog dog0 = Dog(5, "Azor", "Brown", person0);
    Cat cat0 = Cat(10, "Miał", "White", person0);

    dog0.Sound();
    cat0.Sound();
    cout << dog0.owner->hairColor << endl;
    cout << cat0.owner->age << endl;

    return 0;
}
