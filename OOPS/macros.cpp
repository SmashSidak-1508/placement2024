#include <bits/stdc++.h>
using namespace std;
#define PI 3.15
#define MAX(x, y) (x > y ? x : y)

float circleArea(float r)
{
    return PI * r * r;
}

float perimeter(float r)
{
    return 2 * PI * r;
}
int fun()
{
    int x = 6;
    int y = 12;
    int c = MAX(x, y);
    return c;
}
void fun2()
{
    int x = 10;
    int y = 20;
    int c = MAX(x, y);
    cout << c << endl;
}

int main()
{
    cout << circleArea(10) << endl;
    cout << perimeter(10.1) << endl;
    cout << fun() << endl;
    fun2();
    return 0;
}