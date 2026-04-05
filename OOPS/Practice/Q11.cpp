/*
Que 11. Write a C++ program to demonstrate Hybrid Inheritance using Virtual Inheritance. Create a
base class Person with a constructor. Derive two classes Student and Employee using virtual
inheritance. Create a class Intern that inherits from both Student and Employee. Show how
constructors are called and avoid duplicate Person objects.
*/

#include <iostream>
using namespace std;

// Base class
class Person {
public:
    Person() {
        cout << "Person constructor called" << endl;
    }
};

// Derived class 1 (virtual inheritance)
class Student : virtual public Person {
public:
    Student() {
        cout << "Student constructor called" << endl;
    }
};

// Derived class 2 (virtual inheritance)
class Employee : virtual public Person {
public:
    Employee() {
        cout << "Employee constructor called" << endl;
    }
};

// Hybrid derived class
class Intern : public Student, public Employee {
public:
    Intern() {
        cout << "Intern constructor called" << endl;
    }
};

// Main function
int main() {
    Intern obj;
    return 0;
}