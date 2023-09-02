#include <iostream>
using namespace std;
// 训练1-23： 输入n ，输出1～n 的所有整数（无返回值）。
void print(int n) {
    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
    cout << "print() ended!";
}
int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}