#include <iostream>
using namespace std;
// 训练1-38： 现在有n 盏灯，编号为1～n
// ，开始时所有的灯都是关的，编号为1的人走过来，把编号是1的倍数的灯开关按下（开的关上，关的打开），编号为2的人把编号是2的倍数的灯开关按下，编号为3的人又把编号是3的倍数的灯开关按下……直到第k
// 个人为止。给定n 和k （0<n ,k ≤1000），输出哪几盏灯是开着的
int main() {
    int n, k;
    cin >> n >> k;
    int *a = new int[n + 1](); // 初始化为 0,灯状态是关的
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            if (j % i == 0) {
                // 按下开关
                if (a[j] == 0) {
                    a[j] = 1;
                } else {
                    a[j] = 0;
                }
            }
        }
    }
    // 输出灯的状态是开的
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1) {
            cout << i << endl;
        }
    }

    delete[] a; //垃圾回收
    return 0;
}