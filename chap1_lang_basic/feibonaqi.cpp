#include <iostream>
using namespace std;
// 训练1-15： 输出斐波那契数列第100项（F (1)=F (2)=1；F (n )=F (n -1)+F (n
// -2)）。
long long F[101];
int main() {
    F[1] = 1;
    F[2] = 1;
    for (int i = 3; i <= 100; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
    cout << "F[100]=" << F[100] << endl;

    return 0;
}