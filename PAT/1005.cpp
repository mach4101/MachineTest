#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool vis[100005];
int a[100005];

// 标记在折腾过程中访问过的数字为true
void trans(int n) {
    while (n != 1) {
        n = (n % 2 == 0) ? n / 2 : (3 * n + 1) / 2;
        vis[n] = true;
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        if (!vis[a[i]]) {
            trans(a[i]);
        }
    }

    vector<int> vec;

    // 将答案保存到vector中后，排序输出
    for (int i = n - 1; i >= 0; --i) {
        if (!vis[a[i]]) {
            vec.push_back(a[i]);
        }
    }

    sort(vec.begin(), vec.end(), greater<int>());

    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i != vec.size() - 1)
            cout << " ";
        else
            cout << endl;
    }

    return 0;
}