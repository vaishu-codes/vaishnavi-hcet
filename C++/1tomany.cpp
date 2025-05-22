#include<iostream>
#include<vector>
using namespace std;

class Teacher{
 string name;
 public:
 Teacher (string n):name (n) {}
 string getName(){return name;}
};

 class Student{
 string name;
 public:
 Student (string n):name(n){}
 string getName(){return name;}
};

class Classroom{
Teacher teacher;
vector<Student>student;

public:
Classroom(Teacher t):teacher(t){}

void addStudent(Student s){
    student.push_back(s);
}
  void displayClassDetails(){
    cout<<"Teacher:"<<teacher.getName() <<endl;
    cout<<"Students:";
    for(auto& s : student){
        cout<< s.getName()<<" ";
    }
    cout<<endl;
}
};

int main()
{
Teacher t1("Mrs.Neha");

 Student s1("Vaishnavi") , s2("Jaya");

 Classroom class1(t1);
 class1. addStudent(s1);  // Add student 1
 class1. addStudent(s2);  // Add student 2
 
 class1.displayClassDetails();
 
return 0;
}