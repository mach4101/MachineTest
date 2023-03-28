// 图像旋转
#include<iostream>
using namespace std;

const int N = 110;
int a[N][N];

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= m; ++i) {
        for(int j = n; j >= 1; --j) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}