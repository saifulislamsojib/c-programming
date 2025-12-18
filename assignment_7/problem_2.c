#include<stdio.h> 

int main() {
    int arr[5], arr2[5], out_arr[5];

    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < 5; i++) {
        out_arr[i] = arr[i] + arr2[i];
    }

    for(int i = 0; i < 5; i++) {
        printf("%d\n", out_arr[i]);
    }

    return 0;
}