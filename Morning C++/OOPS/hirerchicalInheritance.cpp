#include <iostream>
using namespace std;
class Animal
{
    public:
        Animal()
        {
            Animal(4);
            cout<<endl<<"This is default of Animal";
        }
        Animal(int legs)
        {
            cout<<endl<<"THe number of legs are : "<<legs;
        }
        void eat()
        {
            cout<<endl<<"All animal needs food to eat";
        }
};
class Dog : public Animal
{
    public:
        Dog()
        {
            Dog(4);
            cout<<endl<<"this is first derived class of animals";
        }
        Dog(int legs)
        {
            cout<<endl<<"THe number of legs are : "<<legs;
        }
        void bark()
        {
            cout<<endl<<"the dog barks";
        }
};
class Cat : public Animal
{
    public:
        Cat()
        {
            Cat(4);
            cout<<endl<<"Default const. of cat";
        }
        Cat(int legs)
        {
            cout<<endl<<"THe number of legs are : "<<legs;
        }
        void meow()
        {
            cout<<endl<<"Cat says meow";
        }
};
class Goat : public Animal
{
    public:
        Goat()
        {
            Goat(4);
            cout<<endl<<"Default const. of derived class Goat";
        }
        Goat(int legs)
        {
            cout<<endl<<"THe number of legs are : "<<legs;
        }
        void bla()
        {
            cout<<endl<<"the goat says bla bla";
        }
};
int main() 
{
    Dog d;
    Cat c;
    Goat g;
    d.eat();
    d.bark();
    c.eat();
    c.meow();
    g.eat();
    g.bla();

    return 0;
}