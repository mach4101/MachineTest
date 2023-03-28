// 猫狗收容所
// 可以维护两个队列，一个狗，一个猫，队列元素多加一个进队次序的属性，在顺序收养的时候只需要比较队头元素的次序就好了
#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> animals;

    int n;
    cin >> n;
    while (n--) {
        int op1, op2;
        cin >> op1 >> op2;
        // 有小东西加入收容所
        if (op1 == 1) {
            animals.push(op2);
        } else {  // 收养
            if (op2 == 0) {
                // 收养第一个
                cout << animals.front() << endl;
                animals.pop();
            } else if (op2 == 1) {
                // 收养🐶
                while (animals.size() > 0 && animals.front() <= 0) {
                    animals.push(animals.front());
                    animals.pop();
                }

                cout << animals.front() << " ";
                animals.pop();

            } else {
                // 收养🐱

                while (animals.size() > 0 && animals.front() >= 0) {
                    animals.push(animals.front());
                    animals.pop();
                }

                cout << animals.front() << " ";
                animals.pop();
            }
        }
    }

    return 0;
}