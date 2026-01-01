#include <stdio.h>

int main() {
    int size = 5;
    int arr[size];

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i++) {
        int *p = arr + i;
        printf("Value: %d, Address: %p\n", *p, p);
    }

    return 0;
}