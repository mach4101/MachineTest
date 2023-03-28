// 求一个日期是星期几，转化为求它与1年1月1日的天数差。因为1年1月1日是星期一。

#include <iostream>
#include <string>
using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}

// int main() {

//     int src_year = 1, src_month = 1, src_day = 1;

//     int count = 0;

//     while (!(src_year == dest_year && src_month == dest_month && src_day == dest_day)) {
//         count++;
//         src_day++;

//         if (src_day == 29 && src_month == 2 && !isLeapYear(src_year)) {
//             src_day = 1;
//             src_month = 3;
//         } else if (src_day == 30 && src_month == 2 && isLeapYear(src_year)) {
//             src_day = 1;
//             src_month = 3;
//         } else if (src_day == 31 && (src_month == 4 || src_month == 6 || src_month == 9 || src_month == 11)) {
//             src_day = 1;
//             src_month++;
//         } else if (src_day == 32 && (src_month == 1 || src_month == 3 || src_month == 5 || src_month == 7 || src_month == 8 || src_month == 10)) {
//             src_day = 1;
//             src_month++;
//         } else if (src_day == 32 && src_month == 12) {
//             src_day = 1;
//             src_month = 1;
//             src_year++;
//         }
//     }

//     cout << count + 1 << endl;

//     return 0;
// }