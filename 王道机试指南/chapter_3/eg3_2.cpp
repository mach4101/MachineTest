#include <algorithm>
#include <iostream>
using namespace std;

typedef struct point {
    int x, y;
} point;

point a[105];

bool cmp(point ptr1, point ptr2) {
    if (ptr1.y == ptr2.y) {  // 成绩相同比较学号
        return ptr1.x < ptr2.x;
    } else {
        return ptr1.y < ptr2.y;
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i].x >> a[i].y;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; ++i) {
        cout << a[i].x << " " << a[i].y << endl;
    }

    return 0;
}