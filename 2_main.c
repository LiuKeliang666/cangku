//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>
#include <math.h>

int main() {
    int count = 0; 
    // 遍历100到999的所有数
    for (int num = 100; num <= 999; num++) {
        int hundreds = num / 100;        // 百位数
        int tens = (num / 10) % 10;      // 十位数
        int units = num % 10;            // 个位数
        
        // 计算各位数字的立方和
        int sum = pow(hundreds, 3) + pow(tens, 3) + pow(units, 3);
        
        // 判断是否为水仙花数
        if (sum == num) {
            if (count > 0) {
                printf(" "); // 在数字前加空格（第一个数字前不加）
            }
            printf("%d", num);
            count++;
        }
    }
    
    return 0;
}
