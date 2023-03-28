// 查找，二分模板
// 如果是l = mid, r = mid - 1，那么就需要在计算mid的时候加1

#include <algorithm>
#include <iostream>
using namespace std;

int a[105];

int find(int l, int r, int x) {
    while (l < r) {
        int mid = l + r >> 1;
        if (a[mid] >= x) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    if (a[l] == x)
        return 1;
    else
        return 0;
}
int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a + n);

        int m;
        cin >> m;
        while (m--) {
            int tmp;
            cin >> tmp;
            if (find(0, n - 1, tmp)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}