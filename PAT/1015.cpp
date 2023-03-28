// 德才论

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int num;
    int de;
    int cai;
    int total;
    Student(int a, int b, int c, int d)
        : num(a), de(b), cai(c), total(d) {}
};

bool cmp(Student s1, Student s2) {
    if (s1.total == s2.total) {
        if (s1.de == s2.de)
            return s1.num < s2.num;
        return s1.de > s2.de;
    }
    return s1.total > s2.total;
}

void Print(vector<Student> vec) {
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i].num << " " << vec[i].de << " " << vec[i].cai << endl;
    }
    cout << endl;
}

int main() {
    int m, l, h;
    /**
     * 第一类：d， c 均大于h   ----> 德才总分从高到低
     * 第二类：d > h && c < h  ----> 德才总分从高到低
     * 第三类：d < h && c < h && d >= c ----> 总分从高到低
     * 第四类：qita
     */
    vector<Student> stus1, stus2, stus3, stus4;
    cin >> m >> l >> h;
    for (int i = 0; i < m; ++i) {
        int n, d, c;
        cin >> n >> d >> c;
        if (d < l || c < l)
            continue;  // 不予录取

        if (d >= h && c >= h)
            stus1.push_back(Student(n, d, c, d + c));
        else if (d >= h && c < h)
            stus2.push_back(Student(n, d, c, d + c));
        else if (d < h && c < h && d >= c)
            stus3.push_back(Student(n, d, c, d + c));
        else
            stus4.push_back(Student(n, d, c, d + c));
    }

    cout << stus1.size() + stus2.size() + stus3.size() + stus4.size() << endl;

    sort(stus1.begin(), stus1.end(), cmp);
    sort(stus2.begin(), stus2.end(), cmp);
    sort(stus3.begin(), stus3.end(), cmp);
    sort(stus4.begin(), stus4.end(), cmp);

    for (int i = 0; i < stus1.size(); ++i) {
        cout << stus1[i].num << " " << stus1[i].de << " " << stus1[i].cai << endl;
    }

    for (int i = 0; i < stus2.size(); ++i) {
        cout << stus2[i].num << " " << stus2[i].de << " " << stus2[i].cai << endl;
    }
    for (int i = 0; i < stus3.size(); ++i) {
        cout << stus3[i].num << " " << stus3[i].de << " " << stus3[i].cai << endl;
    }

    for (int i = 0; i < stus4.size(); ++i) {
        if (i != stus4.size() - 1)
            cout << stus4[i].num << " " << stus4[i].de << " " << stus4[i].cai << endl;
        else
            cout << stus4[i].num << " " << stus4[i].de << " " << stus4[i].cai;
    }

    return 0;
}