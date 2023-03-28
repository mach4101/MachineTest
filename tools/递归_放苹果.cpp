// M个同样的苹果放在n个盘子里，允许有盘子空着，有多少种放法
// dp[i][j] = dp[i][j - 1] + dp[i - j][j]
// i个苹果放到j个盘子里
#include<iostream>
using namespace std;

int dfs(int m, int n) {
    if(m == 0) return 0;
    if(n == 0) return 0;

    if(n > m) return dfs(m, m);
    if(m > n) return dfs(m - n, n) + dfs(m, n - 1);
}

int main() {
    int t;
    cin >> t;
    while(t -- ) {
        int m, n, k;
        cin >> m >> n;
        cout << dfs(m, n) << endl;
        
    }

    return 0;
}