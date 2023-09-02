#include <iostream>
using namespace std;
// 输入
void input(int a[]) {
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
}
// 显示
void show(int a[]) {
    for (int i = 0; i < 10; i++) {
        cout << a[i] << '\t';
    }
    cout << endl;
}
// 计算
float average(int a[]) {
    float sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += a[i];
    }
    return sum / 10;
}
int main() {
    int a[10];
    input(a);
    show(a);
    cout << average(a) << endl;

    return 0;
}