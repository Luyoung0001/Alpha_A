#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
// 点数
#define maxn 310
struct point {
    int x, y;
    int step; // 步数
};
// 8 个方向的位置偏移量
int dx[8] = {-2, -2, -1, -2, 1, 1, 2, 2};
int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};
bool vis[maxn][maxn];
int sx, sy, ex, ey, tx, ty, L;

int bfs() {
    if (sx == ex && sy == ey) {
        return 0;
    }
    memset(vis, false, sizeof(vis)); // 初始化,默认没有遍历到
    vis[sx][sy] = true;              // 第一个直接 true
    queue<point> Q;                  // 定义一个栈内存的队列

    point start, node;

    start.x = sx;
    start.y = sy;
    start.step = 0;

    Q.push(start); // 压入队列
    int step, x, y;
    while (!Q.empty()) {
        // 当队列不为空的时候
        start = Q.front();
        Q.pop(); // 取队列的头元素,并且弹出
        x = start.x;
        y = start.y;
        step = start.step;
        // 扩展 8 个方向
        for (int i = 0; i < 8; i++) {
            tx = x + dx[i];
            ty = y + dy[i];

            if (tx == ex && ty == ey) {
                return step + 1;
            }
            if (tx >= 0 && tx < L && ty >= 0 && ty < L && !vis[tx][ty]) {
                node.x = tx;
                node.y = ty;
                node.step = step + 1;
                Q.push(node);
                vis[tx][ty] = true;
            }
        }
    }
    return 0;
}
int main() {
    int t;
    cin >> t >> L;
    while (t--) {
        cin >> sx >> sy >> ex >> ey;
        int result = bfs();
        cout << "Minimum steps: " << result << endl;
    }
    return 0;
}