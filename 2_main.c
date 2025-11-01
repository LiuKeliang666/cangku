//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>

int main() {
    int num, hundreds, tens, units;
    int first_output = 1;
    
    for (num = 100; num <= 999; num++) {
        // 拆分各位数字
        hundreds = num / 100;
        tens = (num / 10) % 10;
        units = num % 10;
        
        // 判断是否为水仙花数
        if (hundreds*hundreds*hundreds + tens*tens*tens + units*units*units == num) {
            if (first_output) {
                printf("%d", num);
                first_output = 0;
            } else {
                printf(" %d", num);
            }
        }
    }
    return 0;
}
