#include <iostream>
#include "ElvenCalories.hpp"

using namespace std;

int main()
{
    ElvenCalories group1 = ElvenCalories("data1.txt");

    cout << "Max in group 1: " << group1.Max() << endl;

    return 0;
}