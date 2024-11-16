#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y;
    cin >> y;
    if (y % 4 == 0)
    {
        if (y % 100 == 0 && y % 400 != 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}