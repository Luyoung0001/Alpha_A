#include <iostream>
#include <iterator>
using namespace std;
// 输入圆的半径 r ,输出其周长和面积
int main() {
    const double PI = 3.141592653;

    double r, c, s;
    cout << "请输入圆的半径 r :" << endl;
    cin >> r;

    c = PI * r * 2;
    s = PI * r * r;
    cout << "圆的周长为:" << c << endl;
    cout << "圆的面积为:" << s << endl;

    return 0;
}