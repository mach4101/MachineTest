// 不高兴的津津

#include <iostream>
using namespace std;

int inner[8], outer[8];

int main() {
    for (int i = 1; i <= 7; ++i) {
        cin >> inner[i] >> outer[i];
    }

    int index = 0;
    int happy = 0;
    for (int i = 1; i <= 7; ++i) {
        if (inner[i] + outer[i] > 8) {
            if (inner[i] + outer[i] > happy) {
                happy = inner[i] + outer[i];
                index = i;
            }
        }
    }

    cout << index << endl;

    return 0;
}