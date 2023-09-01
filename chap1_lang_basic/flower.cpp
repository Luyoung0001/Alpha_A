#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int n, ge, shi, bai;
    cin >> n;
    ge = n % 10;
    shi = (n / 10) % 10;
    bai = n / 100;
    if (pow(ge, 3) + pow(shi, 3) + pow(bai, 3) == n) {
        // 这里其实加入了函数的重载,能适应不同类型的参数
        cout << "是水仙花数!" << endl;

    } else {
        cout << "不是水仙花数!" << endl;
    }

    return 0;
}