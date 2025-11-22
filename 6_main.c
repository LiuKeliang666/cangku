//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>
#include <stdlib.h>  // 包含malloc/free函数
int main() {
    // 动态申请5个int的内存（每个int占4字节，共20字节）
    int *ptr = (int *)malloc(5 * sizeof(int));
    // 输入数据
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }
    // 输出数据
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    free(ptr);  // 释放动态内存，避免内存泄漏
    ptr = NULL; // 指针置空，避免悬空指针
    return 0;
}
