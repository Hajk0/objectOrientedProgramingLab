#include <iostream>
#include <cmath>
#include <stdexcept>


using namespace std;


class Number
{
public:
    virtual double doubleValue() = 0;
};


class Logarithm : public Number 
{
private:
    double base, argument;
public:
    double doubleValue() { return log(this->argument) / log(this->base);}
    Logarithm(double inputBase, double inputArgument)
    {
        if (inputBase <= 0 || inputBase == 1)
        {
            throw invalid_argument("The base of the logarithm is not a positive number or is 1.\n");
        }
        if (inputArgument <= 0)
        {
            throw invalid_argument("The argument of the logarithm is not a positive number.\n");
        }
        
        this->base = inputBase;
        this->argument = inputArgument;
    }
};


int main()
{
    try
    {
        Logarithm log0 = Logarithm(5, 3);
        cout << log0.doubleValue() << endl;
    }
    catch(invalid_argument & e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Logarithm log1 = Logarithm(-1, 5);
        cout << log1.doubleValue() << endl;
    }
    catch(invalid_argument & e)
    {
        std::cerr << e.what() << '\n';
    }


    return 0;
}