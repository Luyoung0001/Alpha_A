#include <iostream>
#include <vector>
using namespace std;
// 定义 3 个 vector
vector<string> x, y, z, ans;
int main() {
    int a, b, c;
    string s;
    // 输入人数
    while (cin >> a >> b >> c) {
        // 清除缓存
        x.clear(), y.clear(), z.clear(), ans.clear();
        // 添加名单 x
        for (int i = 0; i < a; i++) {
            cin >> s;
            // 这会在容器中构造一个新的对象
            x.push_back(s);
        }
        // 添加名单 y
        for (int i = 0; i < b; i++) {
            cin >> s;
            y.push_back(s);
        }
        // 添加名单 z
        for (int i = 0; i < c; i++) {
            cin >> s;
            z.push_back(s);
        }
        // 开始处理四个容器
        // 应该在 b 名单中抓人
        for (int i = 0; i < b; i++) {
            // 在 x 中找到
            if (find(x.begin(), x.end(), y[i]) != x.end()) {
                // 在 z 中没有找到
                if (find(z.begin(), z.end(), y[i]) == z.end()) {
                    // 添加答案
                    ans.push_back(y[i]);
                }
            }
        }
        if (!ans.size()) {
            cout << "No enemy spy\n";
        } else {
            // 输出 ans
            for (int i = 0; i < ans.size(); i++) {
                if (i != 0) {
                    cout << " ";
                }
                cout << ans[i];
            }
            cout << endl;
        }
    }

    return 0;
}