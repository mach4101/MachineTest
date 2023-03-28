#include <iostream>
using namespace std;

// hanoi的功能是将n个位于两端的盘子移动到对面
long long hanoi(int n) {
    if (n == 1)
        return 2;
    return hanoi(n - 1) * 3 + 2;
}

int main() {
    int n;
    while (cin >> n) {
        cout << hanoi(n) << endl;
    }

    return 0;
}