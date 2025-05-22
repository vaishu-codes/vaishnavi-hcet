#include<iostream>
using namespace std;
class Company
{
string name;
public:
Company(string n):name(n){}
string getName(){return name;}
};

class Employee{
string name;
Company &company ;
public:
Employee (string n,Company&c):name(n),company(c){}
void displayDetails(){
    cout<<"Employee:"<<name<<"Company:"<<company.getName()<<endl;
}
};
int main(){
Company comp("TechCorp");

Employee e1("Vaishnavi",comp);
Employee e2("Jaya",comp);

e1.displayDetails();
e2.displayDetails();
return 0;

} 