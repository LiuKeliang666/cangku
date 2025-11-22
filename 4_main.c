//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>
// 指针操作数组元素自增
void increment(int *arr) {
    for (int i = 0; i < 5; i++) {
        *(arr + i) += 1;
    }
}
int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    increment(arr);  // 数组名作为指针传入
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
