#include <bits/stdc++.h>
using namespace std;

class Animal
{

private:
    int weight;

public:
    //    state / property
    int age;
    string name;

    // Default Constructor
    Animal()
    {
        this->weight = 0;
        this->age = 0;
        cout << "constructor called" << endl;
    }

    // parameterised

    Animal(int age)
    {
        this->age = age;
        cout << "para:" << this->age << endl;
    }

    Animal(int age, int weight, string name)
    {
        this->age = age;
        this->weight = weight;
        this->name = name;
        cout << "para:" << this->age << " " << this->weight << " " << this->name << endl;
    }

    // copy constructor
    // behaviour and functions
    void eat()
    {
        cout << "eating" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }

    int getweight()
    {
        return weight;
    }
    void setweight(int weight)
    {
        this->weight = weight;
    }
};

int main()
{

    // object creation

    // static
    Animal ramesh;
    ramesh.age = 70;
    ramesh.name = "sidak";
    cout << "Age:" << ramesh.age << endl;
    cout << "name:" << ramesh.name << endl;
    ramesh.sleep();
    ramesh.eat();

    ramesh.setweight(101);
    cout << ramesh.getweight() << endl;
    // dynamic
    Animal *suresh = new Animal;

    (*suresh).age = 15;
    (*suresh).name = "bill";
    suresh->eat();
    suresh->sleep();
    Animal *b = new Animal(100);
    Animal a1(12, 10, "sidak");

        //  padding and greedy alignment
}