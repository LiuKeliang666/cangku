//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>

int main() {
    int arr[5];
    int count = 0;
    int num;
    int i;

    while (count < 5) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            arr[count] = num;
            count++;  // 存入后计数+1
        }
    }

    printf("%d", arr[0]);
    for (i = 1; i < 5; i++) {
        printf(" %d", arr[i]);
    }

    return 0;
}
