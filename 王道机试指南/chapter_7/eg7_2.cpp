// 不知道为啥wa了。。。
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

double J[1005], F[1005];
double rate[1005];
int main() {
    double m, n;
    while (cin >> m >> n) {
        double answer = 0;
        if (m == -1 && n == -1) {
            break;
        }

        for (int i = 0; i < n; ++i) {
            cin >> J[i] >> F[i];
            rate[i] = J[i] / F[i];
        }

        while (m > 0) {
            double maxn = rate[0];
            int index = 0;

            for (int i = 0; i < n; ++i) {
                if (rate[i] > maxn) {
                    maxn = rate[i];
                    index = i;
                }
            }

            rate[index] = -1;

            if (maxn != -1) {  // 如果都被拿了
                // 如果够换
                if (m >= F[index]) {
                    m -= F[index];
                    answer += J[index];
                } else {
                    answer += J[index] * (m / F[index]);
                    break;
                }
            } else {
                break;
            }
        }

        printf("%.3f\n", answer);
    }
    return 0;
}