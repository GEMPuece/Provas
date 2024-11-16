#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n, c100, c20, c10, c5, c1;
   cin >> n;
   c100 = n / 100;
   n %= 100;
   c20 = n / 20;
   n %= 20;
   c10 = n / 10;
   n %= 10;
   c5 = n / 5;
   n %= 5;
   c1 = n / 1;
   int res = c100 + c20 + c10 + c5 + c1;
   cout << res << endl;
   return 0;
}