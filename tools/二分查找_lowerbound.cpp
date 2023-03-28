// 二分查找---lower_bound
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
    int low = 0, high = n - 1;

    while (low < high) {
        int mid = low + high >> 1;
        if (k <= a[mid]) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    cout << low << endl;
    return 0;
}