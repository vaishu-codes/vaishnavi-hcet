#include<iostream>
using namespace std;
int main()
//Bace class
class Vehicle
{
    public:
    string brand = "Tata";
    void honk()
    {
        cout<< "Tuut,tuut!\n";
    }
};

//Derived class 
class Car:public Vehicle
{
    public:
    string model ="Altroz";
};
int main()
{
    Car myCar;
    myCar.honk();
    cout << myCar.brand+" "+ myCar.model;
    return 0;
}
  