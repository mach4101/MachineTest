#include <iostream>
using namespace std;

int find(int n, int m) {
    if (m <= n) {
        return find(n, m * 2) + find(n, m * 2 + 1) + 1;
    } else
        return 0;
}

int main() {
    int m, n;
    while (cin >> m >> n) {
        if (m == 0 && n == 0)
            break;
        cout << find(n, m) << endl;
    }
}