// 从n个元素中选择出r个元素

#include <iomanip>
#include <iostream>

using namespace std;

int ans[22];
bool vis[22];
int n, r;

void dfs(int num) {
    if (num > r) {
        for (int i = 1; i <= r; ++i) {
            cout << setw(3) << ans[i];
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; ++i) {
        // 如果是第一个，并且没有访问过和保证有序
        if (num == 1 || (!vis[i] && i > ans[num - 1])) {
            vis[i] = true;
            ans[num] = i;
            dfs(num + 1);
            vis[i] = false;  // 回溯
        }
    }
}

int main() {
    cin >> n >> r;

    dfs(1);

    return 0;
}