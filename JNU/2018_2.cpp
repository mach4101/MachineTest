#include<iostream>
using namespace std;
int a[15][15];
int main() {
    int n;
    cin >> n;

    int count = 1;

    for(int i = 1; i <= n; ++i) {
        if(i % 2 == 1) {
            for(int j = 1; j <= n; ++j) {
                a[i][j] = count ++;
            }
            cout << endl;
        } else {
            for(int j = n; j >= 1; --j) {
                a[i][j] = count ++;
            }
            cout << endl;
        }
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}