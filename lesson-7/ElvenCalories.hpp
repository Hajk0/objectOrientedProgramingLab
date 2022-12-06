#include <iostream>
#include <fstream>

using namespace std;

class ElvenCalories
{
private:
    string fileName;
public:
    ElvenCalories(string fileName);
    int Max();
};
