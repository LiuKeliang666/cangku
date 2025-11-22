//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>
int main() {
    int arr[5];
    // 输入数组元素
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    int *p = arr;   // 数组名arr等价于数组首元素地址
    // 指针遍历数组并乘以2
    for (int i = 0; i < 5; i++) {
        *(p + i) *= 2;
    }
    // 输出结果
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
