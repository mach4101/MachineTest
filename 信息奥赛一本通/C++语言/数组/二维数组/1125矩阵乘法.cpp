// 矩阵乘法
#include<iostream>
using namespace std;

int matrix1[110][110], matrix2[110][110];
int result[110][110];

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            cin >> matrix1[i][j];
        }
    }

    for(int i = 1; i <= m; ++i) {
        for(int j = 1; j <= k; ++j) {
            cin >> matrix2[i][j];
        }
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= k; ++j) {
            for(int s = 1; s <= m; ++s) {
                result[i][j] += (matrix1[i][s] * matrix2[s][j]);
            }
        }
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= k; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}