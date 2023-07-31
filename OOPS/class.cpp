#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Hero
{
public:
    int health;

public:
    char level;
    void print()
    {
        cout << level << endl;
    }
};

int main()
{
    Hero h1;
    h1.health = 70;
    cout << "health:" << h1.health << endl;
    cout << "level:" << h1.level;
    return 0;
}