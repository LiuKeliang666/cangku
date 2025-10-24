//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    scanf("%d %d %c", &a, &b, &op);
    
    if (op == '+') {
        printf("%d", a + b);
    } else if (op == '-') {
        printf("%d", a - b);
    } else if (op == '*') {
        printf("%d", a * b);
    } else if (op == '/') {
        if (b != 0) {
            printf("%d", a / b);
        }
    }
    
    return 0;
}
