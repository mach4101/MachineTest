#include <iostream>

using namespace std;

int n;
int ans[10010];

void dfs(int cur, int x) {
    if (x == 0) {
        cout << n << "=";
        for (int i = 1; i < cur - 1; ++i) {
            cout << ans[i] << "+";
        }
        cout << ans[cur - 1] << endl;
    }

    for (int i = 1; i <= x; ++i) {
        if (ans[cur - 1] <= i && i != n) {
            ans[cur] = i;
            dfs(cur + 1, x - i);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i <= 10000; ++i)
        ans[i] = 1;
    dfs(1, n);

    return 0;
}