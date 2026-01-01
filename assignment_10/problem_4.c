#include <stdio.h>

int main() {
    int arr[] = { 
        4,
        6,
        10,
        43,
        3
    };

    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < length; i++) {
        int *p = arr + i;
        printf("Value: %d, Address: %p\n", *p, p);
    }

    return 0;
}