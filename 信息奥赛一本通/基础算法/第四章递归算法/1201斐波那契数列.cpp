// 飞播拿起

#include <iostream>
using namespace std;

const int N = 25;

int fib(int x) {
    if (x == 1)
        return 1;
    if (x == 2)
        return 1;
    return fib(x - 1) + fib(x - 2);
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        cout << fib(a) << endl;
    }
    return 0;
}