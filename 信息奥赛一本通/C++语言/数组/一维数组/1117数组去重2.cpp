// 可以使用哈嘻的方式
#include<iostream>
using namespace std;
const int N = 20220;
int a[N];

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        int tmp;
        cin >> tmp;
        if(a[tmp] == 0) {
            cout << tmp << " ";
            a[tmp] = 1;
        }
    }

    return 0;
}