#include <iostream>
using namespace std;
// 训练1-25： 输入两个整数a 和b ，交换后输出。
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << "交换之前:a=" << a << " b=" << b << endl;
    swap(&a, &b);
    cout << "交换之后:a=" << a << " b=" << b << endl;
    return 0;
}