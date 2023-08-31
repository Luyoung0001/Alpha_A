#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    double d = sqrt(2.0);
    cout << "精度设置:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << setprecision(i) << d << endl; //设置不同的精度
    }
    cout << "当前精度为:" << cout.precision() << endl; //4
    cout << "当前域宽:" << cout.width() << endl; // 0?
    cout << setw(6) << d << endl; // 设置域宽为 6
    cout << setfill('*') << setw(10) << d // 设置填充字符,并且设置域宽为 10
         << endl; // 通过 setfill()可以直接插入流
    return 0;
}
