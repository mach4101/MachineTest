#include <iostream>
#include <queue>
using namespace std;

typedef struct info {
    int pos;  // 当前的位置
    int t;    // 从起点到达该位置所花的时间
} info;

bool visit[100000];

int main() {
    int n, k;
    cin >> n >> k;

    queue<info> que;
    que.push({n, 0});
    while (que.size()) {
        info tmp = que.front();
        que.pop();
        visit[tmp.pos] = true;

        if (tmp.pos == k) {
            cout << tmp.t << endl;
            return 0;
        } else {
            if (!visit[tmp.pos + 1] && tmp.pos + 1 >= 0 && tmp.pos + 1 <= 100000)
                que.push({tmp.pos + 1, tmp.t + 1});
            if (!visit[tmp.pos - 1] && tmp.pos - 1 >= 0 && tmp.pos - 1 <= 100000)
                que.push({tmp.pos - 1, tmp.t + 1});
            if (!visit[tmp.pos * 2] && tmp.pos * 2 >= 0 && tmp.pos * 2 <= 100000)
                que.push({tmp.pos * 2, tmp.t + 1});
        }
    }
    return 0;
}