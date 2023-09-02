#include <iostream>
using namespace std;
// 引用参数在参数前加“&”符号，引用参数在函数内部的改变出了函数后仍然有效。
// 训练1-25： 输入两个整数a 和b ，交换后输出。
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << "交换之前:a=" << a << " b=" << b << endl;
    swap(a, b);
    cout << "交换之后:a=" << a << " b=" << b << endl;
    return 0;
}