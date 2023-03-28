#include<iostream>
using namespace std;
#include <iomanip>

const int N = 30;
bool vis[N];
int ans[N];
void dfs(int cur, int r, int n) {
    if(cur == r + 1) {
        for(int i = 1; i <= r; ++i) {
            cout << setw(3)<< ans[i];
        }
        cout << endl;
        return;
    }
    for(int i = 1; i <= n; ++i) {
        if(i > ans[cur - 1] && !vis[i]) {
            vis[i] = true;
            ans[cur] = i;
            dfs(cur + 1, r, n);
            vis[i] = false;
        }
    }
}
int main() {
    int n, r;
    cin >> n >> r;
    dfs(1, r, n);
    return 0;
}