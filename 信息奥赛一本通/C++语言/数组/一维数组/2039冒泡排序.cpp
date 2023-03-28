// 冒泡排序
#include<iostream>
using namespace std;

const int N = 25;
int a[N];

int main() {    
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    for(int i = 1; i <= n - 1; ++i) {
        for(int j = 1; j < n - i + 1; ++j) {
            if(a[j] < a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }

    for(int i = 1; i <= n; ++i) {
        cout << a[i] << endl;
    }

    return 0;
}