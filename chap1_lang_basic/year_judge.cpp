#include <iostream>
using namespace std;
int main() {
    int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0) {
        cout << "闰年!" << endl;
    } else {
        cout << "平年!" << endl;
    }
    return 0;
}