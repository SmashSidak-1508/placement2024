#include <bits/stdc++.h>
using namespace std;

class abc
{
    int x;
    int *y;
    const int z;

public:
    // initialisation list
    // it helps to reassign the const variable but old fashion dont support
    // default constructor: dont support the re-initialisation of the const variable
    abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z)
    {
        cout << "init list" << endl;
        *y = *y * 10;
    }

    int getX() const
    {
        return x;
    }
    int getY() const
    {
        return *y;
    }
    int getZ() const
    {
        return z;
    }
};

void printABC(const abc &a)
{
    cout << a.getX() << " " << a.getY() << " " << a.getZ() << endl;
}
int main()
{
    abc a(1, 2, 3);
    printABC(a);
    return 0;
}