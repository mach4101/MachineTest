#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 使用两个vector分别来存放完数和盈数
    vector<int> wanshu;
    vector<int> yingshu;

    for (int i = 2; i <= 60; ++i) {
        int sum = 0;
        for (int j = 1; j < i; ++j) {
            if (i % j == 0) {
                sum += j;
            }
        }

        if (sum == i) {
            wanshu.push_back(i);
        } else if (sum > i) {
            yingshu.push_back(i);
        }
    }

    cout << "E:";
    for (int i = 0; i < wanshu.size(); ++i) {
        cout << " " << wanshu[i];
    }
    cout << endl;
    cout << "G:";
    for (int i = 0; i < yingshu.size(); ++i) {
        cout << " " << yingshu[i];
    }

    return 0;
}