// 选择排序
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

    for (int i = 0; i < n; ++i) {
        int min = a[i];
        int k = i;

        for (int j = i + 1; j < n; ++j) {
            if (a[j] < min) {
                min = a[j];
                k = j;
            }
        }

        swap(a[i], a[k]);
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}