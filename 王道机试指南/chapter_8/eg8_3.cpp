// fibonacci

#include <algorithm>
#include <iostream>
using namespace std;

long long a[30];

int main() {
    int n;
    // 提前打表，滚动dp
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= 30; ++i) {
        a[i] = a[i - 1] + a[i - 2];
    }

    while (cin >> n) {
        cout << a[n] << endl;
    }

    return 0;
}