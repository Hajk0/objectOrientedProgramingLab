#include <iostream>


using namespace std;



class Pair
{
private:
    int a;
    int b;
public:
    Pair(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int max()
    {
        return a > b ? a : b;
    }
    int min()
    {
        return a < b ? a : b;
    }
    float avg()
    {
        return (float)(a + b) / 2;
    }
};


int main()
{
    Pair pair0 = Pair(5, 10);

    cout << "Max: " << pair0.max() << "\nMin: " << pair0.min() << "\nAvg: " << pair0.avg() << endl;

    return 0;
}