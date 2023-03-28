// 集合划分

#include <iostream>
using namespace std;

// 把n个物品装到k个篮子里里头的方案数
long long dfs(int n, int k) {
    // 装不满，不存在方案
    if (n < k)
        return 0;
    // 边界
    if (n == 0 || k == 0)
        return 0;
    // 每个篮子放一个球，只有一种方案
    if (n == k)
        return 1;
    // 将k-1个球放到n-1个篮子里，剩下一个篮子放第k个 或者k个球放到n-1个篮子里，最后一个球有k * dfs(n - 1, k)种
    return dfs(n - 1, k - 1) + k * dfs(n - 1, k);
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << dfs(n, k) << endl;

    return 0;
}