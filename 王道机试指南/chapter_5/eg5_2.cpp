// 约瑟夫环问题
// 将普通队列看成循环队列：可以将元素进队后出队

#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

void print_queue(queue<int> que) {
    while (que.size()) {
        cout << que.front() << " ";
        que.pop();
    }
    cout << endl;
}

int main() {
    int n, p, m;
    while (cin >> n >> p >> m) {
        if (n == 0 && p == 0 && m == 0) {
            break;
        }

        queue<int> que;
        for (int i = 1; i <= n; ++i) {
            que.push(i);
        }

        // 从编号为p的开始，数m个
        while (que.front() != p) {
            que.push(que.front());
            que.pop();
        }

        while (que.size()) {
            for (int i = 0; i < m - 1; ++i) {
                que.push(que.front());
                que.pop();
            }
            if (que.size() != 1)
                cout << que.front() << ",";
            else
                cout << que.front() << endl;
            que.pop();
        }
    }

    return 0;
}