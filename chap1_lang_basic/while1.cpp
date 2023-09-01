#include <iostream>
using namespace std;
// 训练1-16： 输入一个整数n ，输出1～n 的所有整数。
int main() {
    int n, i = 1;
    cin >> n;
    while (1) {
        if (i == n) {
            break;
        }
        cout << i << endl;
        i++;
    }

    return 0;
}