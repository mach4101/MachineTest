// 成绩排名

#include <algorithm>
#include <iostream>

using namespace std;

struct student {
    string name;
    string Num;
    int score;
};

student stu[10005];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> stu[i].name >> stu[i].Num >> stu[i].score;
    }

    string min_num, min_name, max_num, max_name;
    int min_score, max_score;

    min_num = max_num = stu[0].Num;
    min_name = max_name = stu[0].name;
    min_score = max_score = stu[0].score;

    for (int i = 1; i < n; ++i) {
        if (stu[i].score < min_score) {
            min_score = stu[i].score;
            min_name = stu[i].name;
            min_num = stu[i].Num;
        }

        if (stu[i].score > max_score) {
            max_score = stu[i].score;
            max_name = stu[i].name;
            max_num = stu[i].Num;
        }
    }

    cout << max_name << " " << max_num << endl;
    cout << min_name << " " << min_num << endl;

    return 0;
}