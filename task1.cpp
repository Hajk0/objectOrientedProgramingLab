#include <iostream>
#include <string>

using namespace std;

class Dog
{
    public:
        int age;
        string name;
        string color;
        string owner;
    
    Dog(int _age, string _name, string _color, string _owner)
    {
        age = _age;
        name = _name;
        color = _color;
        owner = _owner;
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
        string owner;

    Cat(int _age, string _name, string _color, string _owner)
    {
        age = _age;
        name = _name;
        color = _color;
        owner = _owner;
    }
    
    void Sound()
    {
        cout << "Meow" << endl;
    }
};

class Person
{
    public:
        int age;
        string name;
        string hairColor;
        
    Person(int _age, string _name, string _hairColor)
    {
        age = _age;
        name = _name;
        hairColor = _hairColor;
    }
    
    void Sound()
    {
        cout << "Siemano" << endl;
    }
};


int main()
{
    Person person0 = Person(21, "Witek", "Brown");
    Dog dog0 = Dog(5, "Azor", "Brown", person0.name);
    Cat cat0 = Cat(10, "Miał", "White", person0.name);

    dog0.Sound();
    cat0.Sound();
    
    cout << "Kot"
    

    return 0;
}
