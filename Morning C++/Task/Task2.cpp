#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    double baseSalary;

public:
    Employee(string n, int i, double salary) {
        name = n;
        id = i;
        baseSalary = salary;
    }
    
    // Virtual function for polymorphism
    virtual double calculateSalary() {
        return baseSalary;
    }

    // Virtual display function
    virtual void display() {
        cout << "Name: " << name 
             << ", ID: " << id 
             << ", Salary: " << calculateSalary();
    }

    // Virtual destructor
    virtual ~Employee() {}
};

// Derived Class: PermanentEmployee
class PermanentEmployee : public Employee {
private:
    double bonus;

public:
    PermanentEmployee(string n, int i, double salary, double b)
        : Employee(n, i, salary) {
        bonus = b;
    }

    double calculateSalary() override {
        return baseSalary + bonus;
    }

    void display() override {
        cout << "Name: " << name
             << ", ID: " << id
             << ", Salary: " << calculateSalary()
             << " (Permanent)" << endl;
    }
};

// Derived Class: Contractor
class Contractor : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    Contractor(string n, int i, double rate, int hours)
        : Employee(n, i, 0) {  // baseSalary not used
        hourlyRate = rate;
        hoursWorked = hours;
    }

    double calculateSalary() override {
        return hourlyRate * hoursWorked;
    }

    void display() override {
        cout << "Name: " << name
             << ", ID: " << id
             << ", Salary: " << calculateSalary()
             << " (Contractor)" << endl;
    }
};

int main() {
    cout << "--- Employee Payroll System ---" << endl;

    // Base class pointers (Polymorphism)
    Employee* emp1 = new PermanentEmployee("Alice", 101, 50000, 10000);
    Employee* emp2 = new Contractor("Bob", 102, 300, 150);

    emp1->display();
    emp2->display();

    delete emp1;
    delete emp2;
    return 0;
}