//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>
// 指针参数实现交换
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);   // 传入变量地址
    printf("%d %d\n", x, y);
    return 0;
}
