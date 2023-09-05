#include <iostream>
#include <list>
using namespace std;
int main() {
    int T, n;
    list<int> a;
    list<int>::iterator it;
    cin >> T;
    while (T--) {
        cin >> n;
        a.clear(); // 清空
        int k = 2; // 报数 2 的人标记
        for (int i = 1; i <= n; i++) {
            a.push_back(i); // 存入每个士兵的编号
        }
        // 开始处理
        while (a.size() > 3) {
            int cnt = 1;
            for (it = a.begin(); it != a.end();) {
                if (cnt++ % k == 0) {
                    it = a.erase(it); // it指向下一位士兵的地址
                } else {
                    it++; // it 指到下一位士兵
                }
            }
            k = (k == 2 ? 3 : 2);
        }
        // 打印答案
        for (it = a.begin(); it != a.end(); it++) {
            if (it != a.begin()) {
                cout << " ";
            }
            cout << *it;
        }
        cout << endl;
    }

    return 0;
}