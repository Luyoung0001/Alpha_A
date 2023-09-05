#include <iostream>
#include <stack>
#include <utility>
using namespace std;
// 题目描述（POJ1028）：
// 标准的Web浏览器包含在最近访问过的页面中向后和向前移动的功能。实现这些特性的一种方法是使用两个栈来跟踪前后移动可以到达的页面。支持以下命令。
// BACK：将当前页面推到前向栈的顶部。从后向栈的顶部弹出页面，使其成为新的当前页面。如果后向栈为空，则忽略该命令。
// FORWARD：将当前页面推到后向栈的顶部。从前向栈顶部弹出页面，使其成为新的当前页面。如果前向栈为空，则忽略该命令。
// VISIT：将当前页面推到后向栈的顶部，使URL成为新的当前页面。前向栈清空。
stack<string> forWard, backWard;
// 当前页面
string current;
// BACK 命令
void BACK() {
    forWard.push(current);
    if (backWard.empty()) {
        cout << "Ignore!" << endl;
    } else {
        current = backWard.top();
        backWard.pop();
    }
}
// FORWARD 命令
void FORWARD() {
    backWard.push(current);
    if (forWard.empty()) {
        cout << "Ignore!" << endl;
    } else {
        current = forWard.top();
        forWard.pop();
    }
}
// VISIT 命令
void VISIT(string visitTo) {
    backWard.push(current);
    current = visitTo;
    // 清空栈
    while (!forWard.empty()) {
        forWard.pop();
    }
}

int main() {
    // 初始化 backward
    backWard.push("***###.acm.org/");
    // 实现
    return 0;
}