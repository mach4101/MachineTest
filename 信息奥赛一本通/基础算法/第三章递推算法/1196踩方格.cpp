#include <iostream>
using namespace std;
const int N = 100;

bool vis[N][N];
int dp[N][N];
int direction[3][2] = {{0, -1}, {0, 1}, {1, 0}};
int n;
int ans = 0;

void dfs(int x, int y, int step) {
    if (step == n) {
        ans++;
        return;
    }

    for (int i = 0; i < 3; ++i) {
        int dx = direction[i][0] + x;
        int dy = direction[i][1] + y;

        if (!vis[dx][dy]) {
            vis[x][y] = true;
            dfs(dx, dy, step + 1);
            vis[x][y] = false;
        }
    }
}

int main() {
    cin >> n;
    dfs(25, 25, 0);
    cout << ans << endl;
    return 0;
}