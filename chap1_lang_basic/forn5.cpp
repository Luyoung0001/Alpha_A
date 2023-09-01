#include <iostream>
using namespace std;
// 训练1-14： 输入一个整数n （0< n <10），输出n !。
// 这里采用递归的方法来实现
int jie(int n) {
    if (n == 1) {
        return 1;
    }
    return n * jie(n - 1);
}
int main() {
    int n;
    cin >> n;
    cout << jie(n) << endl;

    return 0;
}