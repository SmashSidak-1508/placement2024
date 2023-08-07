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

    //  padding and greedy alignment
}