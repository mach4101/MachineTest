#include <iostream>
using namespace std;

int a[1010], b[1010];

int main() {
    int n;
    cin >> n;

    a[1] = 8;
    b[1] = 1;
    for (int i = 2; i <= n; ++i) {
        a[i] = (a[i - 1] * 9 + b[i - 1]) % 12345;
        b[i] = (a[i - 1] * 1 + b[i - 1] * 9) % 12345;
    }

    cout << a[n] << endl;

    return 0;
}