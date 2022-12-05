#include <iostream>
#include <fstream>

using namespace std;

class ElvenCalories
{
private:
    int max;
    string fileName;
public:
    ElvenCalories(string fileName);
    int Max();
};
