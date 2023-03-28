// 素因子表达式

#include <iostream>
using namespace std;

void divide(int n) {
    bool flag = true;
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0) {
            int s = 0;
            while (n % i == 0) {
                n /= i;
                s++;
            }
            if (s == 1) {
                if (flag)
                    cout << i;
                else
                    cout << "*" << i;
            } else {
                if (flag)
                    cout << i << "^" << s;
                else
                    cout << "*" << i << "^" << s;
            }
            flag = false;
        }
    }
}

int main() {
    int n;
    cin >> n;
    divide(n);
    return 0;
}