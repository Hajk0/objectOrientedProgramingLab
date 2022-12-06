#include <iostream>
#include "ElvenCalories.hpp"

using namespace std;

int main()
{
    ElvenCalories group1 = ElvenCalories("data1.txt");

    int result = group1.Max();

    cout << "Max calories in this group of elves: " << result;

    return 0;
}