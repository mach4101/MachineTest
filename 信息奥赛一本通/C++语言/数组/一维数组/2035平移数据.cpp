// 平移数据
#include <iostream>
using namespace std;

const int N = 1100;
int a[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; ++i) {
        a[i - 1] = a[i];
    }

    a[n] = a[0];

    for (int i = 1; i <= n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}