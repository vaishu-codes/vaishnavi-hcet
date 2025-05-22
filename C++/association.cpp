#include<iostream>
using namespace std;
class A
{
public:
virtual void show()
{
cout<<"Base class";
}
};
class B: public A
{
public:
void show(){
cout<<"derived class";
}
};
int main()
{
A *p;

A a;

p = &a;
p->show();
return 0;
}
