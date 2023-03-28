// 数字反序
#include <iostream>
using namespace std;

int revn(int n) {
    int res = 0;
    while (n) {
        res *= 10;
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << revn(n) << endl;

    return 0;
}