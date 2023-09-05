#include <bitset>
#include <iostream>
// 每个元素都可以用一个二进制数记录所属的集合。最右侧为低位0位，自右向左。例如，1属于第1个集合，就将1对应的二进制数的第1位置为1，即
// s[1]=0010；1还属于第2个集合，就将1对应的二进制数的第2位置为1，即s [1]=0110；
// s[1]=0110表示元素1属于1、2两个集合。同理，s[2]=0110，s[3]=0010，s[5]=0100，
// s[10]=1000。
using namespace std;
const int maxn = 10010;
bitset<1010> s[maxn]; // 在静态存储区放一个 bitset 数组
int main() {
    int N, Q, num, X, Y;

    cin >> N; // N 个集合

    for (int i = 1; i <= N; i++) {
        cin >> num; // 集合元素
        while (num--) {
            cin >> X; // 集合元素
            s[X][i] = 1;
        }
    }
    cin >> Q;
    while (Q--) {
        cin >> X >> Y;
        if ((s[X] & s[Y]).count()) {
            // 有交集
            cout << "Yes!" << endl;
        } else {
            cout << "No!" << endl;
        }
    }
    return 0;
}