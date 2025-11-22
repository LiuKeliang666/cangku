//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>
// 指针实现冒泡排序
void bubbleSort(int *arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            // 比较相邻元素，若逆序则交换
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
