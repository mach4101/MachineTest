// N阶楼梯上楼问题

#include <algorithm>
#include <iostream>

using namespace std;

const int N = 100;
int a[N];

int main() {
    a[1] = 1;
    a[2] = 2;

    for (int i = 3; i < 100; ++i) {
        a[i] = a[i - 1] + a[i - 2];
    }

    int n;
    while (cin >> n) {
        cout << a[n] << endl;
    }
    return 0;
}