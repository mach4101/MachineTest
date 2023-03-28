#include <cstring>
#include <iostream>
using namespace std;
int ans[10010];
int n;

void divide(int cur, int x) {
    if (x == 0) {
        cout << n << "=";
        for (int i = 1; i < cur; ++i) {
            if (i == 1)
                cout << ans[i];
            else
                cout << "+" << ans[i];
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= x; ++i) {
        if (ans[cur - 1] <= i && i != n) {
            ans[cur] = i;
            divide(cur + 1, x - i);
        }
    }
}
int main() {
    cin >> n;
    for (int i = 0; i < 10010; ++i)
        ans[i] = 1;
    divide(1, n);
    return 0;
}