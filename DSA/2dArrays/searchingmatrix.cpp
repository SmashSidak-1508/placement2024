#include <bits/stdc++.h>
using namespace std;

// int input_matrix()
// {
// }

int main()
{
    int n, m;
    cout << "enter elements" << endl;
    cin >> n >> m;
    int arr[n][m];
    int x;
    cout << "enter the element to be searched" << endl;
    cin >> x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "i:" << i << "j:" << j << endl;
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}