#include <iostream>
using namespace std;
// 练1-21： 输入一个大于1的整数n （n <100），若n 为奇数，则n 变为3n +1；否则n
// 变为n /2。经过若干变换，n
// 会变为1并停止，输出变换次数。在无法预知循环次数或者循环更新不规律时，用while语句。
int main() {
    int n, count = 0;
    cin >> n;

    while (n > 1) {
        count++;
        if (n % 2 != 0) {
            n = 3 * n + 1;
        } else {
            n /= 2;
        }
        cout << n << endl;
    }
    cout << "count=" << count << endl;
    return 0;
}