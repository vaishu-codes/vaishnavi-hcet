#include<iostream>
using namespace std;
const m=50;
class items
{
int item [m];
float item [m];
int count;

public:
void CNT(void){
count =0;
}
void get  (void);
void display (void);
void remove (void);
void display  (void);

void item::get item()
{
cout<<"enter item code";
cin>>item code[count];
cout<<"enter item cost";
cin>>item price[count];
}

//***get item***

void item::display Sum()
{
float sum=0;
for (int i=0; i<count;i++)
sum =sum+item+item price[i];
cout<<"\n total value :"<<sum<</n;
}
 //***remove item***
 void item::remove (void)
 {
 int a
 cout<<"enter item code";
 cin>>a;
 for(int i=0;i<count;i++)
 {
 if(item code [i]==a)
 item prize[i]=0;
 }
 }

//**display item */
cout<<"/n code price";
for (i=0;i<count;i++)
{
 cout<<"/n item code[i];"
 cout<<"/n item price[i];"
}
int main()
{
item I1,order;
I,CNT();
int x;
{
 cout<<"/n enter appropriate number";
 cout<<"/n 1: Add an item";
 cout<<"/n 2: Display total sum";
 cout<<"/n 3: Remove an item from the list";
 cout<<"/n 4: Display all the items";
 cout<<"/n 5: quit";
 cout<<"/n what is your option";
 cin>>x;

 switch (x){
case 1:I1 .get item();
case 2:I2 .display sum();
case 3: I3.remove();
case 4:I4.display item();
case 5: break; 
 }
}

}
while (x!=5;)
return 0;
}