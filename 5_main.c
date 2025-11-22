//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>
// 指针实现数组后移
void shift(int *ptr_arr, int len) {
    // 从最后一个元素向前遍历，将前一个元素的值赋给当前元素
    for (int i = len - 1; i > 0; i--) {
        *(ptr_arr + i) = *(ptr_arr + i - 1);
    }
    *ptr_arr = 0;   // 首元素补0
}
int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    shift(arr, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
