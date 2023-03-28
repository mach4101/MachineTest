// 约瑟夫问题
#include<iostream>
#include<queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    queue<int> que;
    for(int i = 1; i <= n; ++i) {
        que.push(i);
    }

    while(que.size()) {
        for(int i = 1; i <= m - 1; ++i) {
            int tmp = que.front();
            que.pop();
            que.push(tmp);
        }

        cout << que.front() << " ";
        que.pop();
    }


    return 0;
}