#include<iostream>

using namespace std;

int main()
{
    float fahrenheit, celsius; 

    cout<<"enter the temperature celsius:";
    cin>>celsius;
 
    fahrenheit = (celsius*9.0)/5.0+32;

    cout<<"the temperature in celsius :"<<celsius<<endl;

    cout<<"the temperture in fahrenheit:"<<fahrenheit<<endl;

    return 0;
}