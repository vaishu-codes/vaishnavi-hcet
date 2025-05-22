#include<iostream>
using namespace std;
int main()
{
char op;
int num1,num2;
 int i;
 for(int i=0;i<=123;i++) {
cout<<"enter operator:+,-,*/:=";
cin>>op;

cout<<"enter two operands:";
cin>>num1>>num2;

switch(op){

 case'+':
 cout << num1 <<"+"<< num2 << "=" << num1 + num2;
 break;
 
 case'-':
 cout << num1 << "-" << num2 << "=" << num1 - num2;
 break;
 
 case'*':
 cout << num1 << "*" << num2 << "=" << num1 * num2;
 break;
 
 
 case '/':
 cout << num1 <<"/" << num2 << "=" << num1 * num2;
 break;
 
 default:
 cout<<"error is n ocorrect" ;
 break;
 continue;}
 

}
 return 0;
}