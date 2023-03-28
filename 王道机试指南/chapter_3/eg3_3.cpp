// 成绩相同的按照输入的顺序，那么就可以在录入的时候多维护一个属性
// 另外一个小知识点，STL里面的sort不是稳定的
#include <algorithm>
#include <iostream>
using namespace std;

typedef struct student {
    string name;
    int score;
    int order;
} student;

bool cmp_rise(student stu1, student stu2) {
    if (stu1.score == stu2.score)
        return stu1.order < stu2.order;
    return stu1.score < stu2.score;
}

bool cmp_down(student stu1, student stu2) {
    if (stu1.score == stu2.score)
        return stu1.order < stu2.order;
    return stu1.score > stu2.score;
}

student a[1005];

int main() {
    int n;
    while (cin >> n) {
        int flag;
        cin >> flag;

        for (int i = 0; i < n; ++i) {
            cin >> a[i].name >> a[i].score;
            a[i].order = i;
        }

        if (flag == 0) {  // 降序
            sort(a, a + n, cmp_down);
        } else {
            sort(a, a + n, cmp_rise);
        }

        for (int i = 0; i < n; ++i) {
            cout << a[i].name << " " << a[i].score << endl;
        }
    }

    return 0;
}