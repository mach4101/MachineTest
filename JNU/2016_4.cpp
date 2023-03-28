// 猜数字
#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    // 数字范围从1到n ---> 找到x，至少猜多少次

    int low = 1, high = n;
    int times = 0;

    while (low <= high) {
        int mid = low + high >> 1;
        times++;
        if (x < mid)
            high = mid - 1;
        else if (x > mid)
            low = mid + 1;
        else
            break;
    }
    cout << times << endl;
    return 0;
}