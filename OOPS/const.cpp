#include <bits/stdc++.h>
using namespace std;
class abc
{
    mutable int x;
    // mutable key
    int *y;
    int z;

public:
    abc(int _x, int _y, int _z = 0)
    {
        x = _x;
        y = new int(_y);
        z = _z;
    }

    int getX() const
    {
        x = 50;
        return x;
    }

    void setX(int _val)
    {
        x = _val;
    }
    int getY() const
    {
        // int f = 10;
        // y = &f;
        return *y;
    }
    void setY(int _val)
    {
        *y = _val;
    }
    int getZ() const
    {
        return z;
    }
};
void printABC(const abc &a)
{
    // only const methods are called
    cout << a.getX() << " " << a.getY() << a.getZ() << endl;
}
int main()
{
    abc a(1, 2);
    printABC(a);
    cout << a.getX() << endl;
    cout << a.getY() << endl;
    return 0;
}

int main2()
{
    // initialise the value but cannot change
    // const int x = 10;
    // // int *p = &x;
    // // *p = 11;
    // cout << x << endl;

    // const with pointers

    // const int *a = new int(2);
    // int const *a = new int(2);// const data ka  non const pointer
    // cout << *a << endl;
    // // *a = 20; cant change the content but pointer can be assigned
    // int c = 20;
    // a = &c;
    // cout << *a << endl;
    // // delete a; // memory leak avoided
    // // int b = 5;
    // // a = &b;
    // // cout << *a << endl;

    // pointer constant ho but non const data
    // int *const a = new int(2);
    // cout << *a << endl;
    // *a = 20;
    // cout << *a << endl;
    // int b = 50;
    // a = &b; pointer constant but data changeable

    const int *const a = new int(10);
    cout << *a << endl;

    return 0;
}