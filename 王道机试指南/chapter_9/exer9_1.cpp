// 玛雅人的秘密
// 结构题的构造函数
// 字符串的匹配
// bfs的状态转移  -----> 重要

#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

typedef struct info {
    int step;  // 记录走到当前变换了多少次
    string str;
    info(int i, string j)
        : step(i), str(j) {}  // 构造函数
} info;

bool check(string str) {
    return str.find("2012") != string::npos;
}

int main() {
    int n;
    while (cin >> n) {
        queue<info> que;
        string str;
        cin >> str;
        unordered_map<string, bool> visit;

        que.push(info(0, str));
        visit[str] = true;

        while (que.size()) {
            info tmp = que.front();
            que.pop();

            if (check(tmp.str)) {
                cout << tmp.step << endl;
                return 0;
            }

            // 状态的转移
            for (int i = 0; i < tmp.str.size() - 1; ++i) {
                swap(tmp.str[i], tmp.str[i + 1]);
                if (!visit[tmp.str]) {
                    que.push(info(tmp.step + 1, tmp.str));
                    visit[str] = true;  // 标记为访问过
                }
                swap(tmp.str[i], tmp.str[i + 1]);  // 还原现场
            }
        }
        cout << -1 << endl;
    }

    return 0;
}