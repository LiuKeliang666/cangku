//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>

int sum_arithmetic(int a, int b, int c) {
    int count = (b - a) / c + 1;
    return count * (a + b) / 2;
}

int main() {
    int result = sum_arithmetic(1, 100, 1);
    printf("%d\n", result);
    return 0;
}
