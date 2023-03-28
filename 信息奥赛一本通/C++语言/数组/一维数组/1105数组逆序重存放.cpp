// 数组逆序
#include <iostream>
using namespace std;

const int N = 110;
int a[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    for (int i = 1; i <= n / 2; ++i) {
        swap(a[i], a[n - i + 1]);
    }

    for (int i = 1; i <= n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}