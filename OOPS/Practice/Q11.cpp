/*
Que 11. Write a C++ program to demonstrate Hybrid Inheritance using Virtual Inheritance. Create a
base class Person with a constructor. Derive two classes Student and Employee using virtual
inheritance. Create a class Intern that inherits from both Student and Employee. Show how
constructors are called and avoid duplicate Person objects.
*/

#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person constructor called" << endl;
    }
};

class Student : virtual public Person {
public:
    Student() {
        cout << "Student constructor called" << endl;
    }
};

class Employee : virtual public Person {
public:
    Employee() {
        cout << "Employee constructor called" << endl;
    }
};

class Intern : public Student, public Employee {
public:
    Intern() {
        cout << "Intern constructor called" << endl;
    }
};

int main() {
    Intern obj;
    return 0;
}