// 矩阵转置
#include <iostream>
using namespace std;

const int N = 110;
int matrix[N][N];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cout << matrix[j][i] <<  " ";
        }
        cout << endl;
    }

    return 0;
}