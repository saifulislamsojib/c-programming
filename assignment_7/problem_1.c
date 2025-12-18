#include<stdio.h>

int main() {
    int marks[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }

    float sum = 0;
    for(int i = 0; i < 10; i++) {
        sum += marks[i];
    }
    float avg = sum / 10;

    printf("Average marks %.2f", avg);

    return 0;
}