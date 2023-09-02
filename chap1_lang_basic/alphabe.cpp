#include <iostream>
#include <string>
using namespace std;
// 训练1-28： 输入n
// 个字母，如果是小写字母，则将其转换为大写字母，输出转换后的字符串。
void strconvert(string &str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}
int main() {
    string str;
    cin >> str;

    strconvert(str);
    cout << str << endl;

    return 0;
}