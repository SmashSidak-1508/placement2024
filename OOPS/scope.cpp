#include <bits/stdc++.h>
using namespace std;
int x = 2; // global variable
void fun()
{
    int x = 60;
    ::x = 40;
    cout << x << endl;
    cout << ::x << endl;
}
int main()
{
    x = 4;      // global x
    int x = 20; // local to main function
    // cout << x << endl;
    // cout << ::x << endl; // accessing global variable
    {
        int x = 50;
        {
            int x = 44;
            cout << x << endl;
        }
        cout << x << endl;
        cout << ::x << endl;
        // it print the most recent local variable and the most local variable
    }
    fun();
}