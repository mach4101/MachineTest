// n个元素的数组循环右移m个单位

#include <iostream>
using namespace std;

int a[200];

void Print(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << a[i];
        if (i != n)
            cout << " ";
        else
            cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    if (m > n)
        m = m % n;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    for (int i = 1; i <= n - m; ++i) {
        cout << "exchange " << a[i] << " " << a[n - m + i] << endl;
        swap(a[i], a[n - m + i]);
        Print(n);
    }

    for (int i = m + 1; i <= n - m; ++i) {
        cout << "exchange2 " << a[i] << " " << a[i + m] << endl;
        swap(a[i], a[i + m]);
        Print(n);
    }

    // Print(n);

    return 0;
}
