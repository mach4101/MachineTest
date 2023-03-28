#include <iostream>
using namespace std;

// partition:将n个元素分成k份的方案数量
long long f(int n, int k) {
    // 无法划分集合
    if (n < k || k == 0)
        return 0;
    // 每个子集只有一个元素
    if (n == k || k == 1)
        return 1;

    // 要么自成一体，要么加入到其余的k个集合中去
    return f(n - 1, k - 1) + (k * f(n - 1, k));
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << f(n, k) << endl;

    return 0;
}