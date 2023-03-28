// 快排
#include <iostream>
using namespace std;

const int N = 1100;
int a[N];

void quick_sort(int l, int r) {
    if (l >= r)
        return;
    // 选择主元，将比主元小的移动到左边，大的放到右边
    int ldx = l - 1, rdx = r + 1;
    int pivot = a[l];

    while (ldx < rdx) {
        do
            ldx++;
        while (a[ldx] < pivot);
        do
            rdx--;
        while (a[rdx] > pivot);

        if (ldx < rdx)
            swap(a[ldx], a[rdx]);
    }

    quick_sort(l, rdx);
    quick_sort(rdx + 1, r);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    quick_sort(0, n - 1);

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}