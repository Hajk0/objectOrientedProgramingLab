#include <iostream>


using namespace std;

class Clothes
{
private:
    string kind;
    int quantity;
    float weight;
public:
    Clothes(string kind, int quantity, float weight);
};

Clothes::Clothes(string kind, int quantity, float weight)
{
    this->kind = kind;
    this->quantity = quantity;
    this->weight = weight;
}


int main()
{
    Clothes c1 = Clothes("shoes", 6, 0.5);

    return 0;
}
