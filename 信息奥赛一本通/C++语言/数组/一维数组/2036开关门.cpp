// 开关门
#include <iostream>
using namespace std;

const int N = 1100;
int a[N];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {  // n个服务员
        // 在1到1000之间寻找i的倍数
        for (int j = i; j <= 1000; ++j) {
            if (j % i == 0)
                a[j] == 0 ? a[j] = 1 : a[j] = 0;
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (a[i] == 1)
            cout << i << " ";
    }

    return 0;
}