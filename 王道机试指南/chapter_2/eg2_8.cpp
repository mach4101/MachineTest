#include <cstdio>
#include <iostream>
using namespace std;

int isLeapYear(int year) {
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}

// 暴力膜
int main() {
    int m;
    cin >> m;
    while (m--) {
        int year, month, day, count;
        cin >> year >> month >> day >> count;

        for (int i = 0; i < count; ++i) {
            day++;

            if (day == 29 && month == 2 && !isLeapYear(year)) {
                day = 1;
                month = 3;
            } else if (day == 30 && month == 2 && isLeapYear(year)) {
                day = 1;
                month = 3;
            } else if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11)) {
                day = 1;
                month++;
            } else if (day == 32 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)) {
                day = 1;
                month++;
            } else if (day == 32 && month == 12) {
                month = 1;
                day = 1;
                year++;
            }
        }

        printf("%04d-%02d-%02d\n", year, month, day);
    }

    return 0;
}