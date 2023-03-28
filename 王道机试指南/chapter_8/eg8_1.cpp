#include <iostream>
using namespace std;

long long fac(int n) {
    if (n == 0)
        return 1;
    return fac(n - 1) * n;
}

int main() {
    long long n;
    while (cin >> n) {
        cout << fac(n) << endl;
    }

    return 0;
}