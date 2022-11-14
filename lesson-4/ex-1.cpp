#include <iostream>

using namespace std;


class Vehicle
{
    public:
    virtual float totalFuelUsage() = 0;
};

class Car: public Vehicle
{
private:
    string brand;
    float fuelUsagePer100KM;
    float mileage;

public:
    Car(string brand, float fuelUsagePer100KM, float mileage)
    {
        this->brand = brand;
        this->fuelUsagePer100KM = fuelUsagePer100KM;
        this->mileage = mileage;
    }
    float tripCost(float gasolinePrice)
    {
        return gasolinePrice * this->fuelUsagePer100KM / 100;
    }
    float totalFuelUsage()
    {
        return this->fuelUsagePer100KM * this->mileage / 100;
    }
    class Car resetMilage()
    {
        return Car(this->brand, this->fuelUsagePer100KM, 0);
    }


};


int main()
{
    Car car0 = Car("Ford", 6.3, 345621);
    cout << "Trip cost: " << car0.tripCost(100.0) << endl;
    cout << "Total fuel usage: " << car0.totalFuelUsage() << endl;
    Car car1 = car0.resetMilage();
    cout << "New car total fuel usage: " << car1.totalFuelUsage() << endl;


    return 0;
}