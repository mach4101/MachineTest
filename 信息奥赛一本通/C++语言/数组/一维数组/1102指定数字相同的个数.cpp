// 指定数字相同
#include <iostream>
using namespace std;

int a[110];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int m;
    cin >> m;
    int cnt = 0;

    for (int i = 1; i <= n; ++i) {
        if (a[i] == m)
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}