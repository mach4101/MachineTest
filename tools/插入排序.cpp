// 插入排序
#include <iostream>
using namespace std;

const int N = 1100;
int a[N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // 插入排序
    for (int i = 1; i < n; ++i) {
        // 【0， i - 1】是已经排好的序列，【i，n - 1】是未排好的序列
        int tmp = a[i];  // 提前保存好需要插入的值

        for (int j = 0; j < i; ++j) {
            if (a[j] > tmp) {
                // 找到了插入的地方
                for (int k = i; k > j; --k) {
                    a[k] = a[k - 1];
                }
                a[j] = tmp;
                break;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}