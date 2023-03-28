#include <algorithm>
#include <iostream>
using namespace std;

int a[1005];

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // 最大的数挑出来后排序，只需要将最大的数与最后一个数交换位置，然后排序的时候确定边界就好了
        if (n == 1) {
            cout << a[0] << endl;
            cout << -1 << endl;
        }

        else {
            int maxn = a[0];
            int index = 0;
            for (int i = 1; i < n; ++i) {
                if (a[i] > maxn) {
                    maxn = a[i];
                    index = i;
                }
            }

            swap(a[index], a[n - 1]);
            sort(a, a + n - 1);

            cout << a[n - 1] << endl;
            for (int i = 0; i < n - 1; ++i) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}