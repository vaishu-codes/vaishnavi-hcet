#include<iostream>
using namespace std;
int main()

// Class definition for 'student'
class student {
    int rno;
    string name;
    double fee;

public:
    // Parameterized constructor
    student(int, string, double);
    // Copy constructor
    student(student& t)
    {
        rno = t.rno;
        name = t.name;
        fee = t.fee;
        cout << "Copy Constructor Called" << endl;
    }
    // Function to display student details
    void display();
};

// Implementation of the parameterized constructor
student::student(int no, string n, double f)
{
    rno = no;
    name = n;
    fee = f;
}

// Implementation of the display function
void student::display()
{
    cout << rno << "\t" << name << "\t" << fee << endl;
}

int main()
{
   student s(1001, "Manjeet", 10000);
    s.display();

    // Create another student object using the copy
    // constructor
    student jaya(s);
    jaya.display();

    return 0;
}