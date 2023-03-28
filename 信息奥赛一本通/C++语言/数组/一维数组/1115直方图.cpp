// 直方图
#include<iostream>
using namespace std;

int cnt[10010];

int main() {
    int n;
    cin >> n;
    int max = -1;
    for(int i = 1; i <= n; ++i) {
        int tmp;
        cin >> tmp;
        if(tmp > max) max = tmp;
        cnt[tmp] ++;
    }

    for(int i = 0; i <= max; ++i) {
        cout << cnt[i] << endl;
    }

    return 0;
}