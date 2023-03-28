// 反序数

#include <iostream>
using namespace std;
int main() {
    for (int num = 1000; num < 9999; ++num) {
        int revnum = num * 9;
        if ((revnum / 1000 == num % 10) && (revnum / 100 % 10 == num / 10 % 10) && (revnum / 10 % 10 == num / 100 % 10) && (revnum % 10 == num / 1000)) {
            cout << num << endl;
        }
    }
    return 0;
}