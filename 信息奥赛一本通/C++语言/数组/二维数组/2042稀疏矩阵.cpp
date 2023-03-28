// 稀疏矩阵
#include <iostream>
using namespace std;



int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <=n; ++i) {
        for(int j = 1; j <= m; ++j) {
            int tmp;
            cin >> tmp;
            if(tmp != 0) {
                cout << i <<" " << j << " " << tmp << endl;
            }
        }
    }

    return 0;
}