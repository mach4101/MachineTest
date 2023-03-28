// leapyear

#include <iostream>
using namespace std;

bool is_leapyear(int year) {
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}

int main() {
    return 0;
}