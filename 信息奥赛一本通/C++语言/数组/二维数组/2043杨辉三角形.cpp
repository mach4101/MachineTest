// 杨辉三角形
#include<iostream>
using namespace std;

const int N = 25;
int map[N][N];

int main() {
    int n;
    cin >> n;

    map[1][1] = 1;

    for(int i = 2; i <= n; ++i) {
        for(int j = 1; j <= i; ++j) {
            map[i][j] = map[i - 1][j - 1] + map[i - 1][j];
        }
    }

    for(int i = 1; i <= n ;++i) {
        for(int j = 1; j <= i; ++j) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}