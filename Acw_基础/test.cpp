#include <bits/stdc++.h>
using namespace std;
int n;
int ans[10001];

void print(int cur) {
    cout << n << "=";
    for (int i = 1; i <= cur; ++i) {
        if (i == 1)
            cout << ans[i];
        else
            cout << "+" << ans[i];
    }
    cout << endl;
    return;
}

void divide(int cur, int x) {
    for (int i = ans[cur - 1]; i <= x; ++i) {
        if (i < n) {
            ans[cur] = i;
            x -= i;
            if (x == 0)
                print(cur);
            divide(cur + 1, x);
            x += i;
        }
    }
}

int main() {
    cin >> n;

    divide(1, n);
    return 0;
}