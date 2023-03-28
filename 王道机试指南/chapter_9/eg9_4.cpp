#include <iostream>
using namespace std;

int stick[25];
bool vis[25];
int m, length;

// dfs三元组，第一个是当前拼好的木棍长度，第二个是已拼成的木棍疏朗，第三个是当前的木棍编号
bool dfs(int sum, int number, int position) {
    // 如果已经拼好了三根，那么第四根就出来了
    if (number == 3) {
        return true;
    }

    for (int i = position; i < m; ++i) {
        // 如果当前的木棍没有被选过
        if (!vis[i]) {
            vis[i] = true;

            if (sum + stick[i] == length) {
                dfs(0, number + 1, i);
            } else {
                dfs(sum + stick[i], number, i);
            }

            vis[i] = false;  // 回溯
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        cin >> m;
        for (int i = 0; i < m; ++i) {
            cin >> stick[i];
        }

        int sum = 0;
        for (int i = 0; i < m; ++i) {
            sum += stick[i];
        }

        length = sum / 4;
        if (sum % 4 == 0) {
            if (dfs(0, 0, 0)) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}