#include <iostream>
using namespace std;
void merge(int A[], int low, int mid, int high) {
    // 申请辅助空间
    int *B = new int[high - low + 1];
    // 3个指针
    int i = low, j = mid + 1, k = 0;
    while (i <= mid && j <= high) {
        // 排好顺序放在 B 中
        if (A[i] > A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    // A 中两端数据需要放到 B 中
    while (i <= mid) {
        B[k++] = A[i++];
    }
    while (j <= high) {
        B[k++] = A[j++];
    }
    // 将 B 中的数据放回 A 中
    for (i = low, k = 0; i <= high; i++) {
        A[i] = B[k++];
    }
    // 内存回收
    delete[] B;
}
// 递归
void mergeSort(int A[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}
int main() {
    int a[10] = {11, 33, 22, 12, 3, 4, 5, 1, 2,10};
    mergeSort(a, 0, 9);
    for (int i = 0; i < 10; i++) {
        cout << a[i] << endl;
    }
    return 0;
}