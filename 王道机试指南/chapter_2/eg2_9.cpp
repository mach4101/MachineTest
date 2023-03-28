// 剩下的树
// 用一个bool数组来模拟树，重复操作就重复操作，无所谓
#include <iostream>
using namespace std;

bool tree[10005];

int main() {
    int L, M;
    while (cin >> L >> M) {
        for (int i = 0; i < M; ++i) {
            int x, y;
            cin >> x >> y;
            for (int j = x; j <= y; ++j) {
                if (tree[j] == false) {
                    L--;
                    tree[j] = true;
                }
            }
        }

        cout << L + 1;
    }

    return 0;
}