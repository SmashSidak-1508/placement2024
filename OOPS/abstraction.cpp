#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    // essential info is hidden from the outside world
    vector<int> v = {1, 3, 4, 8, 5};
    // abstraction in header file
    sort(v.begin(), v.end());
    string s = "codehelp";
    sort(s.begin(), s.end());
    // sort function implementation is hidden in the header file without knowing the inside working
    for (auto i : v)
    {
        cout << i << endl;
    }
    for (auto i : s)
    {
        cout << i << endl;
    }
}