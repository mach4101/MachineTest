// 百鸡问题
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int x = 0; x <= 100; ++x) {
            for (int y = 0; y <= 100; ++y) {
                for (int z = 0; z <= 100 - x - y; ++z)
                    if ((x * 5) + (y * 3) + (z * 0.333) <= n && (x + y + z) == 100) {
                        cout << "x=" << x << ",y=" << y << ",z=" << z << " " << endl;
                    }
            }
        }
    }

    return 0;
}