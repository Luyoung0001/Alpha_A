#include <iostream>
using namespace std;
int partition(int r[], int low, int high) {
    // 设置 两 个指针
    int i = low, j = high;
    // 基准元素,就设置 low 位置的元素为基准
    int p = r[low];
    while (i < j) {
        // 向左扫描
        while (i < j && r[j] > p) {
            j--;
        }
        if (i < j) {
            swap(r[i++], r[j]);
        }
        // 向右边扫描
        while (i < j && r[i] <= p) {
            i++;
        }
        if (i < j) {
            swap(r[i], r[j--]);
        }
    }
    // 返回基准元素位置
    return i;
}
// 递归,先苦后甜
void quickSort(int r[], int low, int high) {
    if (low < high) {
        int mid = partition(r, low, high);
        quickSort(r, low, mid - 1);
        quickSort(r, mid + 1, high);
    }
}
int main() {
    int a[10] = {11, 33, 22, 12, 3, 4, 5, 1, 2,10};
    quickSort(a, 0, 9);
    for (int i = 0; i < 10; i++) {
        cout << a[i] << endl;
    }
    return 0;
}