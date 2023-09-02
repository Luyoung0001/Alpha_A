#include <iostream>
using namespace std;
// 训练1-27： 输入n 个整数并将其存入a []数组，求和后输出和值。
int arrayadd(int a[], int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i];
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    // int a[n]; // 静态定义的数组必须是常量或者字面常量,因此本写法有误

    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int s = arrayadd(a, n);
    cout << s << endl;
    delete[] a; // 释放内存

    return 0;
}