// Old Bill 无所谓，三重循环会出手
// #include <iostream>
// using namespace std;

// int main() {
//     int n;  // 火鸡的只数
//     while (cin >> n) {
//         int x, y, z;
//         cin >> x >> y >> z;

//         int res_i = 0, res_j = 0, res_k = 0;

//         // 前两个循环模拟总价格， 第三个循环模一只火鸡的价格
//         for (int i = 1; i <= 9; ++i) {
//             for (int j = 0; j <= 9; ++j) {
//                 int price = i * 10000 + x * 1000 + y * 100 + z * 10 + j;
//                 for (int k = 1; k <= 100000; ++k)
//                     if (n * k == price) {
//                         res_i = i;
//                         res_j = j;
//                         res_k = k;
//                     }
//             }
//         }

//         if (res_k == 0) {
//             cout << 0 << endl;
//             return 0;
//         }
//         cout << res_i << " " << res_j << " " << res_k << endl;
//     }

//     return 0;
// }

// 正统解法
#include <iostream>
using namespace std;

int main() {
    int n;  // 火鸡的只数
    while (cin >> n) {
        int x, y, z;
        cin >> x >> y >> z;

        int res_i = 0, res_j = 0, res_k = 0;
        bool flag = false;
        // 前两个循环模拟总价格， 第三个循环模一只火鸡的价格
        for (int i = 1; i <= 9; ++i) {
            for (int j = 0; j <= 9; ++j) {
                int price = i * 10000 + x * 1000 + y * 100 + z * 10 + j;
                if (price % n == 0) {
                    flag = true;
                    res_i = i;
                    res_j = j;
                    res_k = price / n;
                }
            }
        }

        if (!flag) {
            cout << 0 << endl;
            return 0;
        }
        cout << res_i << " " << res_j << " " << res_k << endl;
    }

    return 0;
}