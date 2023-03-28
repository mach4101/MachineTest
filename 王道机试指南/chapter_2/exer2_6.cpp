#include<iostream>
#include<cstdio>
using namespace std;

// 两个日期之间的差值

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}

int main() {
    int src, dest;
    cin >> src >> dest;

    if(src > dest) swap(src, dest);

    int src_year = src / 10000, src_month = src / 100 % 100, src_day = src % 100;
    int dest_year = dest / 10000, dest_month = dest / 100 % 100, dest_day = dest % 100;

    int count = 0;

    while(!(src_year == dest_year && src_month == dest_month && src_day == dest_day)) {
        count ++;
        src_day++;

        if(src_day == 29 && src_month == 2 && !isLeapYear(src_year)) {
            src_day = 1; src_month = 3;
        } else if(src_day == 30 && src_month == 2 && isLeapYear(src_year)) {
            src_day = 1; src_month = 3;
        } else if(src_day == 31 && (src_month == 4 || src_month == 6 || src_month == 9 || src_month == 11)) {
            src_day = 1; src_month++;
        } else if(src_day == 32 && (src_month == 1 || src_month == 3 || src_month == 5 || src_month == 7 || src_month == 8 || src_month == 10)) {
            src_day = 1; src_month++;
        } else if(src_day == 32 && src_month == 12) {
            src_day = 1; src_month = 1; src_year ++;
        }
    }

    cout << count + 1 << endl;

    return 0;
}