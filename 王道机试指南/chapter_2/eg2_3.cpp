#include <iostream>
using namespace std;

// 复杂了
int rev(int num) {
    int revnum = 0;
    int idx = 0;
    int a[10];
    while (num) {
        a[idx++] = num % 10;
        num /= 10;
    }

    int fac = 1;

    for (int i = idx - 1; i >= 0; --i) {
        revnum += a[i] * fac;
        fac = fac * 10;
    }
    return revnum;
}

// 简单的
int revx(int x) {
    int revnum = 0;
    while (x) {
        revnum *= 10;  // 关键！
        revnum += x % 10;
        x /= 10;
    }
    return revnum;
}

int main() {
    for (int i = 0; i <= 256; ++i) {
        if (i * i == revx(i * i))
            cout << i << endl;
    }
    return 0;
}