#include <iostream>
using namespace std;
// 训练1-34： 输入一个整数n ，输出斐波那契数列的第n 项。
int fei(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fei(n-1)+fei(n-2);
}
int main() {
    int n;
    cin >> n;
    cout << "第" << n << "个斐波那契数列为:" << fei(n) << endl;
}