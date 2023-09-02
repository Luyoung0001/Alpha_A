#include <iostream>
using namespace std;
// 训练1-29： 输入两个整数a 和b ，求这两个整数的最大公约数和最小公倍数。
// 最大公约数,辗转相除法
int gcd(int x, int y) {
    int t;
    t = x % y;
    while (t != 0) {
        x = y;
        y = t;
        t = x % y;
    }
    return y;
}

// 最小公倍数
int lcm(int x, int y) {
    int g;
    g = gcd(x, y);
    return (x * y) / g;
}
int main() {
    int a, b, c, d;
    cin >> a >> b;
    c = gcd(a, b);
    d = lcm(a, b);
    cout << "最大公约数:" << c << " 最小公倍数:" << d << endl;

    return 0;
}