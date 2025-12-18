#include <stdio.h>

int factorial(int num) {
    if(num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    if (num == 0 || num == 1) {
        return 1;
    }
    int fact = 1;
    for(int i = 2; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num;
    scanf("%d", &num);
    int result = factorial(num);
    if (num >= 0) {
        printf("Factorial: %d\n", result);
    }
    return 0;
}