#include <iostream>
using namespace std;
// 训练1-22： 输入n 对整数a 和b ，输出它们的和。
int add(int a, int b) { return a + b; }

int main() {
    int n, a, b;
    cin >> n;
    // 这是允许的
    int C[n];
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        C[i] = a + b;
    }
    for (int i = 0; i < n; i++) {
        cout << C[i] << endl;
    }
    cout << "this is a test!" << endl;

    return 0;
}