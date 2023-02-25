#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main() {
    int year, month, day;
    cin >> year >> month >> day;
    int count = 0;

    int monthcount = 1, daycount = 1;
    if (isLeapYear(year)) {
        while (!(monthcount == month && daycount == day)) {
            count++;
            daycount++;
            if (daycount == 30 && monthcount == 2) {
                daycount = 1;
                monthcount = 3;
            } else if (daycount == 31 && (monthcount == 4 || monthcount == 6 || monthcount == 9 || monthcount == 11)) {
                daycount = 1;
                monthcount++;
            } else if (daycount == 32 && (monthcount == 1 || monthcount == 3 || monthcount == 5 || monthcount == 7 || monthcount == 8 || monthcount == 10 || monthcount == 12)) {
                daycount = 1;
                monthcount++;
            }
        }
    } else {
        while (!(monthcount == month && daycount == day)) {
            count++;
            daycount++;
            if (daycount == 29 && monthcount == 2) {
                daycount = 1;
                monthcount++;
            } else if (daycount == 31 && (monthcount == 4 || monthcount == 6 || monthcount == 9 || monthcount == 11)) {
                daycount = 1;
                monthcount++;
            } else if (daycount == 32 && (monthcount == 1 || monthcount == 3 || monthcount == 5 || monthcount == 7 || monthcount == 8 || monthcount == 10 || monthcount == 12)) {
                daycount = 1;
                monthcount++;
            }
        }
    }
    cout << count + 1 << endl;

    return 0;
}