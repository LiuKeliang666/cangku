#include <stdio.h>

int main() {
    int record[5];
    int i;

    printf("请输入前4位学号：");
    for (i = 0; i < 4; i++) {
        scanf("%d", &record[i]);
    }

    for (i = 4; i > 0; i--) {
        record[i] = record[i - 1];
    }

    record[0] = 0;//补充0

    printf("更新后的提交记录：");
    printf("%d", record[0]);
    for (i = 1; i < 5; i++) {
        printf(" %d", record[i]);
    }

    return 0;
}
