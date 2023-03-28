#include <iostream>
using namespace std;

int main() {
    int a;
    while (cin >> a) {
        // 如果有奇数只脚，那么肯定寄
        if (a % 2 != 0) {
            cout << 0 << " " << 0 << endl;
        } else {
            // 算至少的时候，优先算兔子的个数，最后不够再加一只鸡
            int back_a = a;
            int least = a / 4;
            a = a % 4;
            if (a == 2)
                least++;

            // 最多肯定全是鸡的情况
            int more = back_a / 2;

            cout << least << " " << more << endl;
        }
    }

    return 0;
}