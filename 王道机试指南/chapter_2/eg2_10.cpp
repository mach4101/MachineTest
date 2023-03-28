#include <iostream>
using namespace std;

// 弄一个数组，存每个按键所需要的时间：

int timetable[26] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};

int main() {
    string tmp;
    while (cin >> tmp) {
        int count = 0;
        int len = tmp.length();

        for (int i = 0; i < len; ++i) {
            count += timetable[tmp[i] - 'a'];  // 按键时间

            // 等待时间：因为在timetable里面一块与一块之间是不连续的，比如c和d，c是3，d是1，那么d - c = -2，而字母序是一定的，d-c = 1，所以就可以通过这个来判断是否在同一个键位上
            if (i != 0 && tmp[i] - tmp[i - 1] == timetable[tmp[i] - 'a'] - timetable[tmp[i - 1] - 'a'])
                count += 2;
        }

        cout << count << endl;
    }

    return 0;
}