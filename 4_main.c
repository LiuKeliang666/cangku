//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>

int main() {
    int num = 100;
    int count = 0; 
    
    while (num <= 999) {
        int original = num;
        int sum = 0;
        
        // 使用while循环计算各位数字的立方和
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp = temp / 10;
        }
        
        // 判断是否为水仙花数
        if (sum == num) {
            if (count > 0) {
                printf(" "); // 在数字前加空格（第一个数字前不加）
            }
            printf("%d", num);
            count++;
        }
        
        num++;
    }
    
    return 0;
}
