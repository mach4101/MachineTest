// 砝码称重

#include <iostream>
#include <set>
using namespace std;

int weight[25];
int n, m;
bool vis[25];
int arr[25];
set<int> s;
int res = 0;

void dfs(int k, int now) {
    if (k < n - m) {
        int sum = 0;
        for (int i = 0; i <= k; ++i) {
            sum += arr[i];
        }
        cout << endl;

        int tmp = s.size();
        s.insert(sum);
        if (tmp != s.size())
            res++;
    }

    for (int i = now; i < n; ++i) {
        if (!vis[i]) {
            vis[i] = true;
            arr[now] = weight[i];
            dfs(k + 1, i + 1);
            vis[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        cin >> weight[i];
    }

    // n个数字中，选出n-m个数字，这些数字的不同和有多少个
    dfs(0, 0);

    cout << res << endl;
    return 0;
}