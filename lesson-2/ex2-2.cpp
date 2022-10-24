#include <iostream>


using namespace std;

class Milk
{
public:
    string producer;
    string taste;
    int quantity;
    float volume;
    

    Milk(string producer, string taste, int quantity, float volume);

    float amount()
    {
        return this->quantity * this->volume;
    }

    void checkIfGood()
    {
        if (this->taste == "Good")
        {
            cout << "This milk is good XD" << endl;
        }
        
    }


    
};

Milk::Milk(string producer, string taste, int quantity, float volume)
{
    this->producer = producer;
    this->taste = taste;
    this->quantity = quantity;
    this->volume = volume;
}


int main()
{
    Milk m1 = Milk("Mlekovita", "Good", 20, 0.85);

    cout << m1.amount() << endl;
    
    m1.checkIfGood();


    return 0;
}
