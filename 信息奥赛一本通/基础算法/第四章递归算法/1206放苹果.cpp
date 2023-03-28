// 放苹果
#include <iostream>
using namespace std;

int ans = 0;
// 组合数
const int N = 20;
int m, n;

// m个苹果，放到n个盘子上
int dfs(int m, int n) {
    if (n == 1 || m == 0)
        return 1;
    else if (m < n)
        return dfs(m, m);
    return dfs(m, n - 1) + dfs(m - n, n);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ans = 0;
        cin >> m >> n;
        cout << dfs(m, n) << endl;
    }
    return 0;
}