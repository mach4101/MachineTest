// 校门外的树
#include<iostream>
using namespace std;

const int N = 10010;

int tree[N];

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= m; ++i) {
        int a, b;
        cin >> a >> b;
        for(int i = a; i <= b; ++i) {
            tree[i] = 1;
        }
    }

    int cnt = 0;
    for(int i = 0; i <= n; ++i) {
        if(tree[i] == 0) cnt ++;
    }

    cout << cnt << endl;

    return 0;

}