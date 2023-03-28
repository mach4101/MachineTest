// 日期加法：输入一个年月日，再输入一个天数，求是何年何月何日
#include <iostream>
using namespace std;

bool is_leapyear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int year, month, day;
    int count;
    cin >> year >> month >> day;
    cin >> count;

    while (count) {
        count--;
        day++;
        if (day == 29 && !is_leapyear(year) && month == 2) {
            day = 1;
            month = 3;
        } else if (day == 30 && is_leapyear(year) && month == 2) {
            day = 1;
            month = 3;
        } else if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11)) {
            day = 1;
            month++;
        } else if (day == 32 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) {
            day = 1;
            month++;
        }

        if (month == 13) {
            month = 1;
            year++;
        }
    }

    cout << year << " " << month << " " << day << endl;

    return 0;
}