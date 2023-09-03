#include <iostream>
using namespace std;
// 递归函数训练1-32： 输入n 个整数，倒序输出所有整数。
void print(int a[], int n) {
    cout << a[n - 1] << endl;
    if (n > 1) {
        print(a, n - 1);
    }
}
int main() {
    int n;
    cin >> n;
    int *c = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    print(c, n);
    return 0;
}