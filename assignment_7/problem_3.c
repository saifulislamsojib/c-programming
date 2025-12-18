#include <stdio.h>

int main() {
    int numbers[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    int smallest = numbers[0];
    for(int i = 1; i < 10; i++) {
        if(numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("The Smallest number is %d", smallest);

    return 0;
}