/*
Que 10. Design a class hierarchy for a University System using constructors: Base class Person
(name, age); Derived class Student (rollNo, marks); Derived class Teacher (subject, salary);
Further derive ResearchScholar from Student (researchTopic). Demonstrate object creation and
constructor calls.
*/

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Person Constructor Called" << endl;
    }
};

class Student : public Person {
protected:
    int rollNo;
    float marks;

public:
    Student(string n, int a, int r, float m) : Person(n, a) {
        rollNo = r;
        marks = m;
        cout << "Student Constructor Called" << endl;
    }
};

class Teacher : public Person {
protected:
    string subject;
    float salary;

public:
    Teacher(string n, int a, string sub, float sal) : Person(n, a) {
        subject = sub;
        salary = sal;
        cout << "Teacher Constructor Called" << endl;
    }
};

class ResearchScholar : public Student {
private:
    string researchTopic;

public:
    ResearchScholar(string n, int a, int r, float m, string topic)
        : Student(n, a, r, m) {
        researchTopic = topic;
        cout << "ResearchScholar Constructor Called" << endl;
    }
};

int main() {
    cout << "\nCreating Student Object:\n";
    Student s1("Rahul", 20, 101, 85.5);

    cout << "\nCreating Teacher Object:\n";
    Teacher t1("Dr. Sharma", 45, "Mathematics", 75000);

    cout << "\nCreating Research Scholar Object:\n";
    ResearchScholar r1("Ankit", 25, 201, 90.0, "Artificial Intelligence");

    return 0;
}