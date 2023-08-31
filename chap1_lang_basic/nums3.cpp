#include <iomanip>
#include <iostream>
using namespace std;
// 输入一个三位数，输出其个位、十位、百位上的数字。
int main() {
    int n;
    int ge, shi, bai;
    cin >> n;
    ge = n % 10;
    shi = (n / 10) % 10;
    bai = (n / 100) % 10;
    cout << ge << setw(2) << shi << setw(20) << bai << endl; // 默认是右对齐
    return 0;
}