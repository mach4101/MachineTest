#include <algorithm>
#include <iostream>
using namespace std;

// 十个整数，空格分割，输出奇数，从大到小，输出偶数，从小到大
int a[12];     // c
int odd[12];   // 奇数
int even[12];  // 偶数

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int odd_idx = 0, even_idx = 0;
    for (int i = 0; i < 10; ++i) {
        int tmp;
        cin >> tmp;
        if (tmp % 2 == 0) {  // 如果是偶数
            even[even_idx++] = tmp;
        } else {
            odd[odd_idx++] = tmp;
        }
    }

    sort(even, even + even_idx);
    sort(odd, odd + odd_idx, cmp);

    for(int i = 0; i < odd_idx; ++i) {
        cout << odd[i] << " ";
    }
    for(int i = 0; i < even_idx; ++i) {
        cout << even[i] << " ";
    }

    cout << endl;

    return 0;
}