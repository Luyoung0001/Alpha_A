#include <iomanip>
#include <iostream>
// 训练1-4： 输入3个整数，分别输出其增加1、扩大10倍、缩小10倍的结果。
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + 1 <<  setw(5) << b * 10<< setw(5) << c / 10 << endl;
    return 0;
}