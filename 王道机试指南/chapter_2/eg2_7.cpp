#include <iostream>
using namespace std;

int isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int daytable[2][13] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int main() {
    int m, n;
    // m表示年份，n表示多少天，计算是几月几号2
    while (cin >> m >> n) {
        int row = isLeapYear(m);
        int month = 0, day = 0;

        int i = 0;
        while (n > 0) {
            day = n;
            n -= daytable[row][i];
            i++;
            month++;
        }

        // 使用if else构造输出的模式
        cout << m << "-";
        if (1 <= month && month <= 9)
            cout << '0' << month << "-";
        else
            cout << month << "-";
        if (1 <= day && day <= 9)
            cout << '0' << day << endl;
        else
            cout << day << endl;
    }

    return 0;
}