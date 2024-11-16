#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int notas[] = {100, 20, 10, 5, 1};
    int count = 0;

    for (int i = 0; i < 5; ++i) {
        count += n / notas[i];
        n = n % notas[i];
    }

    cout << count << endl;
    return 0;
}