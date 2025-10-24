//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>

int main()
{   
    float celsius, fahrenheit;

    printf("请用户输入摄氏温度");

    scanf("%f",&celsius);

    fahrenheit = celsius * 9.0 / 5.0 +32.0;

    printf("华氏温度为: %.1f/n", fahrenheit);

    return 0;   
}   
