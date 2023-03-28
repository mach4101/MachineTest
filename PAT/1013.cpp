// 数素数

#include <iostream>
using namespace std;

bool is_prime(int x) {
    for (int i = 2; i * i <= x; ++i) {
        if (i % x == 0)
            return false;
    }
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = min(m, n); i < max(m, n); ++i) {
        if (is_prime(i)) {
            cout << i << endl;
        }
    }

    return 0;
}