//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>

int main() {
    int matrix[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", matrix[j][i]);
            if (j < 2) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
