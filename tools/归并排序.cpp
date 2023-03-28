// 归并排序
#include <algorithm>
#include <iostream>
using namespace std;

const int N = 1100;
int a[N];
int tmp[N];
void merge_sort(int low, int high) {
    if (low == high)
        return;
    int mid = low + high >> 1;

    merge_sort(low, mid);
    merge_sort(mid + 1, high);

    // 二路归并
    int ldx = low, rdx = mid + 1, idx = low;
    while (ldx <= mid && rdx <= high) {
        if (a[ldx] < a[rdx]) {
            tmp[idx++] = a[ldx++];
        } else {
            tmp[idx++] = a[rdx++];
        }
    }

    while (ldx <= mid) {
        tmp[idx++] = a[ldx++];
    }

    while (rdx <= high) {
        tmp[idx++] = a[rdx++];
    }

    for (int i = low; i <= high; ++i) {
        a[i] = tmp[i];
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    merge_sort(0, n - 1);

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}