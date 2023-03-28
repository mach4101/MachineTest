// 数的划分  -----》 好题

#include <iostream>
using namespace std;

int ans = 0;

// num表示搜到了哪个数，保证单调
void dfs(int n, int k, int num) {
    if (k == 1) {
        if (n >= num) {
            ans++;
            return;
        }
    }

    for (int i = num; i <= n / k; ++i) {
        dfs(n - i, k - 1, i);
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    dfs(n, k, 1);
    cout << ans << endl;
}