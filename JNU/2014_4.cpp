// 矩形覆盖
#include <cmath>
#include <iostream>
using namespace std;
int main() {
    double n, m, x;
    cin >> n >> m >> x;

    cout << ceil(n / x) * ceil(m / x) << endl;

    return 0;
}