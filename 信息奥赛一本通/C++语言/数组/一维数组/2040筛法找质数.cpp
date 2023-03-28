// 筛法
#include <iostream>
using namespace std;

int a[1100];

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; ++i) {
        for (int j = 2; j * i <= n; ++j) {
            a[j * i] = 1;
        }
    }

    for (int i = 2; i <= n; ++i) {
        if (a[i] == 0)
            cout << i << endl;
    }

    return 0;
}