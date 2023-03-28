// D进制的A+B
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    long long a, b;
    int base;
    cin >> a >> b >> base;

    long long c = a + b;
    // 十进制转base进制
    int num = 0;
    int fac = 1;
    
    while (c) {
        num += (c % base) * fac;
        c /= base;
        fac *= 8;
    }

    cout << num << endl;

    return 0;
}