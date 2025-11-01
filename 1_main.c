//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>

int main() 
    {int n;
    
    scanf("%d", &n);
    
    if (n <= 0 || n >= 50) {
        printf("输入无效，请输入小于50的正整数\n");
        return 0;
    }
    
    if (n == 1) {
        printf("密钥不安全，请重新输入");
        return 0;
    }
    
    int isPrime = 1; // 假设是质数
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0; // 找到因子，不是质数
            break;
        }
    }
    
    if (isPrime) {
        printf("密钥安全，密码设置成功");
    } else {
        printf("密钥不安全，请重新输入");
    }
    
    return 0;
}
