// hanoi
#include <cstdio>
#include <iostream>
using namespace std;

// 将n个盘子，从a借助b，移动到c
void hanoi(int n, char a, char c, char b) {
    if (n == 0)
        return;

    hanoi(n - 1, a, b, c);
    printf("%c->%d->%c\n", a, n, b);
    hanoi(n - 1, c, a, b);
}

int main() {
    int n;
    char a, b, c;
    cin >> n >> a >> b >> c;

    hanoi(n, a, c, b);

    return 0;
}