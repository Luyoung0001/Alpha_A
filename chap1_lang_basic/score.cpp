#include <iostream>
using namespace std;
// 训练1-5： 输入一个学生的成绩score，判断是否及格。
int main() {
    float score;
    cin >> score;
    if (score >= 60) {
        cout << "及格!" << endl;

    } else {
        cout << "不及格!" << endl;
    }
    return 0;
}