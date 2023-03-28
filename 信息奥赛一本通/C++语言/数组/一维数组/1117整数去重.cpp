// 整数去重
#include <iostream>
using namespace std;

const int N = 20010;
int a[N];
int main() {
    int n;
    cin >> n;
    int idx = 0;
    for (int i = 1; i <= n; ++i) {
        int tmp;
        bool flag = false;
        cin >> tmp;

        for (int j = 0; j < idx; ++j) {
            if (a[j] == tmp) {
                flag = true;
                break;
            }
        }

        if (!flag)
            a[idx++] = tmp;
    }

    for (int i = 0; i < idx; ++i) {
        cout << a[i] << " ";
    }
}