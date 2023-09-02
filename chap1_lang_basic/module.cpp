#include <iostream>
using namespace std;

template <typename T>
// 10. 函数模板训练1-31： 输入两个数a 和b （整数或者浮点数），求这两个数的和值。
T add(T a, T b) {
    return a + b;
}
int main() {
    int a, b;
    double c, d;
    cin >> a >> b >> c >> d;
    cout << add(a, b) << '\t' << add(c, d) << endl;

    return 0;
}