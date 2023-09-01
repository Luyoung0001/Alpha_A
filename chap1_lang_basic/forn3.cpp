#include <iostream>
using namespace std;
// 训练1-12： 输入一个整数n ，输出n 行1～n 的整数（输出1～n
// 的整数时遇到5停止）。
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == 5) {
                break; // 退出之后,继续打印其余的
            }
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "this is test!" << endl;

    return 0;
}