// 蛇形填数
#include<iostream>
using namespace std;

int map[25][25];

int main() {
    int n;
    cin >> n;

    

    
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}