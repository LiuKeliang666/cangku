//202511716105
//1443785738@qq.com
//刘科良
#include <stdio.h>

int array_sum(int arr[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}

int array_product(int arr[], int len) {
    int product = 1;
    for (int i = 0; i < len; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = array_sum(arr, 5);
    int product = array_product(arr, 5);
    printf("%d %d\n", sum, product); 
    return 0;
}
