#include <iostream>
using namespace std;
// 练1-35： 输入一个学生的信息（包括姓名、学号、性别、年龄、分数）并输出。

struct studant {
    string name;
    string number;
    string sex;
    int age;
    float score;
};
int main() {
    studant stu;
    cout << "请依次输入姓名,学号,性别,年龄,分数:" << endl;
    cin >> stu.name >> stu.number >> stu.sex >> stu.age >> stu.score;
    cout << stu.name << endl;
    cout << stu.number << endl;
    cout << stu.sex << endl;
    cout << stu.age << endl;
    cout << stu.score << endl;
    return 0;
}