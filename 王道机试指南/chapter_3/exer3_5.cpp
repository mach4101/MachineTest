// 招最小数

#include <algorithm>
#include <iostream>

using namespace std;

typedef struct point {
    int x, y;
} point;

point a[1005];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].x >> a[i].y;
    }

    int min_x = a[0].x;
    int min_y = a[0].y;
    for (int i = 0; i < n; ++i) {
        if (a[i].x < min_x) {
            min_x = a[i].x;
            min_y = a[i].y;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (a[i].x == min_x && a[i].y <= min_y) {
            min_y = a[i].y;
        }
    }
    cout << min_x << " " << min_y << endl;
    return 0;
}