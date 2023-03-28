// 选数

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int n, k;
bool vis[25];
int ans[25];
int res = 0;
int a[25];

bool is_prime(int x) {
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0)
            return false;
    }
    return true;
}

void select(int step) {
    if (step > k) {
        int sum = 0;
        for (int i = 1; i <= k; ++i) {
            sum += ans[i];
        }

        if (is_prime(sum))
            res++;

        return;
    }

    for (int i = 0; i < n; ++i) {
        if (step == 1 || !vis[i] && ans[step - 1] <= a[i]) {
            vis[i] = true;
            ans[step] = a[i];
            select(step + 1);
            vis[i] = false;
        }
    }
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    select(1);

    cout << res << endl;
    return 0;
}