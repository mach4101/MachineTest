// 数字分类

#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;

    vector<int> vec1, vec2, vec3, vec4, vec5;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int n;
        cin >> n;
        if (n % 5 == 0 && n % 2 == 0)
            vec1.push_back(n);
        if (n % 5 == 1)
            vec2.push_back(n);
        if (n % 5 == 2)
            vec3.push_back(n);
        if (n % 5 == 3)
            vec4.push_back(n);
        if (n % 5 == 4)
            vec5.push_back(n);
    }

    if (vec1.size() == 0)
        cout << "N";
    else {
        int sum = 0;
        for (int i = 0; i < vec1.size(); ++i) {
            sum += vec1[i];
        }
        cout << sum;
    }

    if (vec2.size() == 0)
        cout << " N";
    else {
        int sum = 0;
        for (int i = 0; i < vec2.size(); ++i) {
            if (i % 2 == 0)
                sum += vec2[i];
            else
                sum -= vec2[i];
        }
        cout << " " << sum;
    }

    if (vec3.size() == 0) {
        cout << " N";
    } else {
        cout << " " << vec3.size();
    }

    if (vec4.size() == 0) {
        cout << " N";
    } else {
        double avg = 0;
        for (int i = 0; i < vec4.size(); ++i) {
            avg += vec4[i];
        }

        avg = avg / vec4.size();
        printf(" %.1f", avg);
    }

    if (vec5.size() == 0) {
        cout << " N";
    } else {
        int max = vec5[0];
        for (int i = 1; i < vec5.size(); ++i) {
            if (vec5[i] > max)
                max = vec5[i];
        }
        cout << " " << max;
    }

    return 0;
}