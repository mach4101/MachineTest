#include <algorithm>
#include <iostream>
using namespace std;

int a[105];

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            if (i == 0 && (a[i] > a[i + 1] || a[i] < a[i + 1])) {
                cout << i << " ";
            } else if ((a[i] > a[i + 1] && a[i] > a[i - 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1])) {
                cout << i << " ";
            } else if (i == n - 1 && (a[i] > a[i - 1] || a[i] < a[i - 1])) {
                cout << i << " ";
            }
        }

        cout << endl;
    }

    return 0;
}