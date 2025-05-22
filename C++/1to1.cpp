  #include <iostream>
 using namespace std;
 class Person {
 string name;
 public:
 Person(string n) : name(n) {}
 string getName() { return name; }
 };
 class Passport {
 int passportNumber;
 public:
 Passport(int pNum) : passportNumber(pNum) {}
 int getPassportNumber() { return passportNumber; }
 };
 // One-to-One association
 class PersonPassport {
 Person person;
 Passport passport;
 public:
PersonPassport(Person p, Passport pass) : person(p), passport(pass) {}
 void displayDetails() {
 cout << "Person: " << person.getName()
 << ", Passport Number: " << passport.getPassportNumber() << endl;
 }
 };
 int main() {
 Person p1("John Doe");
 Passport pass1(12345);
 PersonPassport pp(p1, pass1);
 pp.displayDetails();
 return 0;
 }