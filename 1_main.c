//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>

int main() {
    int arr[3][3];
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }
    for (int i = 0; i < 3; i++) {
        printf("%d %d %d\n", arr[i][0], arr[i][1], arr[i][2]);
    }
    return 0;
}
