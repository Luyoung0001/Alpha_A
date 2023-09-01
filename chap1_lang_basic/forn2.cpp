#include <iostream>
using namespace std;
// 训练1-11： 输入一个整数n ，输出1～n 的所有整数，遇到5时停止。
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i == 5) {
            break;
        }
        cout << i << endl;
    }
    cout << "this is a break test!" << endl;
    return 0;
}