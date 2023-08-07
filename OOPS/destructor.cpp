#include <bits/stdc++.h>
using namespace std;

class Animal
{
private:
    int weight;

public:
    int age;
    int type;

    void setweight(int weight)
    {
        this->weight = weight;
    }

    int getweight()
    {
        return weight;
    }

    ~Animal()
    //
    {
        cout << "i am inside destructor" << endl;
    }
};

int main()
{
    Animal a;
    a.age = 5;

    Animal *b = new Animal();
    b->age = 12;

    // manually
    delete b;

    return 0;
}