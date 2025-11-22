//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int *p = &a;   // 指针p指向a
    *p += 10;      // 通过指针修改a的值
    printf("%d,%d\n", a, *p);
    return 0;
}
