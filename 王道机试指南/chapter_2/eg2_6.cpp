#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

// 模拟写法：
// int main() {
//     int year, month, day;
//     while (cin >> year >> month >> day) {
//         int count = 0, mcount = 1, dcount = 1;
//         while (!(mcount == month && dcount == day)) {
//             dcount++;
//             count++;
//             if (isLeapYear(year) && dcount == 30 && mcount == 2) {
//                 mcount = 3;
//                 dcount = 1;
//             } else if (!isLeapYear(year) && dcount == 29 && mcount == 2) {
//                 mcount = 3;
//                 dcount = 1;
//             } else if (dcount == 31 && (mcount == 4 || mcount == 6 || mcount == 9 || mcount == 11)) {
//                 mcount++;
//                 dcount = 1;
//             } else if (dcount == 32 && (mcount == 1 || mcount == 3 || mcount == 5 || mcount == 7 || mcount == 8 || mcount == 10 || mcount == 12)) {
//                 mcount++;
//                 dcount = 1;
//             }
//         }

//         cout << count + 1 << endl;
//     }

//     return 0;
// }

// 简单的预处理写法：

int daytable[2][13] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int main() {
    int year, month, day;
    while (cin >> year >> month >> day) {
        int count = 0;
        int row = isLeapYear(year);

        for (int i = 0; i < month - 1; ++i) {
            count += daytable[row][i];
        }

        count += day;
        cout << count << endl;
    }

    return 0;
}
