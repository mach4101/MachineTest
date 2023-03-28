// Grading
// 未通过
#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    double P, T, G1, G2, G3, Gj;
    while (cin >> P >> T >> G1 >> G2 >> G3 >> Gj) {
        if (abs(G1 - G2) <= T) {
            printf("%.1f\n", double((G1 + G2) / 2));

        } else if ((abs(G3 - G1) <= T || abs(G3 - G1) <= T) && !(abs(G3 - G1) <= T && abs(G3 - G2) <= T)) {
            if (abs(G3 - G1) > abs(G3 - G2)) {
                printf("%.1f\n", double((G2 + G3) / 2));
            } else {
                printf("%.1f\n", double((G3 + G1) / 2));
            }
        } else if (abs(G3 - G2) <= T && abs(G3 - G1) <= T) {
            printf("%.1f\n", double(max(G1, max(G2, G3))));
        } else {
            printf("%.1f\n", double(Gj));
        }
    }

    return 0;
}