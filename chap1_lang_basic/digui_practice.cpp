#include <iostream>
using namespace std;
// 练习： 写一个递归程序，输出1+2+3+…+n 。
int sum(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum(n - 1);
}
int main() {
    int n;
    cin >> n;
    cout << n << "的加数和为:" << sum(n) << endl;
    return 0;
}