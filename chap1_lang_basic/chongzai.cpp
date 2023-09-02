#include <iostream>
#include <string>
// 函数重载（多态）指有多个同名函数，但是每个同名函数的参数数量、类型、顺序不同。训练1-30：
// 写一个函数，对于字符串类型的数据，取其长度的一半；对于浮点数类型的数据，取其值的二分之一。
using namespace std;
float half(float f) { return f / 2; }
string half(string str) {
    int newlen = str.length();
    char *newstr = new char[newlen];
    for (int i = 0; i < newlen; i++) {
        newstr[i] = str[i];
    }
    return newstr;
}
int main() {
    string str;
    float f;
    cin >> str >> f;
    cout << half(str) << endl;
    cout << half(f) << endl;
    return 0;
}