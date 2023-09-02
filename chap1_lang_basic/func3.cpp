#include <cstdio>
#include <iostream>
using namespace std;
// 训练1-24： 输入n ，如果n 为10的倍数，则输出3个“very good！”。
void printGood3Times() {
    for (int i = 0; i < 3; i++) {
        cout << "very good!" << endl;
    }
}
int main() {
    int n;
    cin >> n;
    if (n % 10 == 0) {
        printGood3Times();
    }
    return 0;
}