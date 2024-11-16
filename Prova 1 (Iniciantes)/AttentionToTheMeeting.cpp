#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n, k;
   cin >> n >> k;
   int y = k - (n - 1);
   int x = y / n;
   cout << x << endl;
   return 0;
}