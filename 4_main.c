//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>

int main() {
    int a, b, c;
    
    // 输入三个整数
    scanf("%d %d %d", &a, &b, &c);
    
    // 判断是否能组成三角形
    if (a + b > c && a + c > b && b + c > a) {
        printf("可以组成三角形");
    } else {
        printf("不能组成三角形");
    }
    
    return 0;
}
