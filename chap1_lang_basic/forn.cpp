#include <iostream>
using namespace std;
// 训练1-10： 输入一个整数n ，输出1～n 的所有整数。
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
    return 0;
}