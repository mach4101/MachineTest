#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = ".XeZ";
    str.erase(str.begin() + 2);
    cout << str << endl;
}