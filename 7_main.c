//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>

void reverse_array(int arr[], int len) {
    for (int i = 0; i < len / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    reverse_array(arr, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if (i < 4) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
