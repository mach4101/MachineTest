// 矩阵交换行
#include<iostream>
using namespace std;

int map[10][10];

int main(){ 
    for(int i = 1; i <= 5; ++i) {
        for(int j = 1; j <= 5; ++j) {
            cin >> map[i][j];
        }
    }

    int row1, row2;
    cin >> row1 >> row2;

    for(int i = 1; i <= 5; ++i) {
        swap(map[row1][i], map[row2][i]);
    }

    for(int i = 1; i <= 5; ++i) {
        for(int j = 1; j <= 5; ++j) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}