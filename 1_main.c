//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>

int main()
{   
    int score;
    
    printf("请输入学生成绩：");

    scanf("%d", &score);

    if (score >= 90 && score <= 100)       {
        printf("A\n");
     }else if (score >= 80 && score <= 89) {
        printf("B\n");  
     }else if (score >= 70 && score <= 79) {
        printf("B\n");
     }else if (score >= 60 && score <= 69) {
        printf("B\n");
     }else if (score >= 0 && score <= 60)  {
        printf("B\n");
     }else                                 {
        printf("输入成绩无效。\n");
     }
      return 0;
}
