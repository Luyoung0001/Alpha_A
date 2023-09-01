#include <iostream>
using namespace std;
// 训练1-13： 输入一个整数n ，输出1～n 的所有整数，遇到偶数时不输出。
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << endl;
    }
    cout << "this is a continue test!" << endl;

    return 0;
}