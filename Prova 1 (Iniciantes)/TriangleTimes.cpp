#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    if (sum == 180)
    {
        if (a == b && b == c)
        {
            cout << "Equilateral" << endl;
        }
        else if (a == b or b == c or a == c)
        {
            cout << "Isosceles" << endl;
        }
        else
        {
            cout << "Scalene" << endl;
        }
    }
    else
    {
        cout << "Error" << endl;
    }
    return 0;
}