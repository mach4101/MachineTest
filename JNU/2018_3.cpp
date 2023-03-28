#include <iostream>
using namespace std;

bool is_prime(int x) {
    if (x == 1)
        return false;

    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int A;
    cin >> A;

    for (int i = 1; i <= A; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (is_prime(i) && is_prime(j) && i + j == A)
                cout << j << " " << i << endl;
        }
    }

    return 0;
}