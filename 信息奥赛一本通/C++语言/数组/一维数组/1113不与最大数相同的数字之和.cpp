// 不与最大数相同的数字之和

#include <iostream>
using namespace std;

int a[110];

int main() {
    int n;
    cin >> n;
    int max = -1e9;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        if (a[i] > max)
            max = a[i];
    }

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i] != max)
            sum += a[i];
    }

    cout << sum << endl;

    return 0;
}