// 爬楼梯
#include<iostream>
using namespace std;

int louti(int x) {
    if(x == 1) return 1;
    if(x == 2) return 2;
    return louti(x - 1) + louti(x - 2);
}

int main() {
    int n;
    while(cin >> n) {
        cout << louti(n) << endl;
    }


    return 0;
}