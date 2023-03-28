// 二分
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

    int k;
    cin >> k;
    int l = 0, r = n - 1;

    while (l < r) {
        int mid = l + r + 1 >> 1;

        if (k >= a[mid]) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }

    cout << l << endl;
    return 0;
}