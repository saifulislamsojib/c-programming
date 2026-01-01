#include<stdio.h>

int main() {
    float num1, num2;
    scanf("%f %f", &num1, &num2);

    float *p1 = &num1, *p2 = &num2;

    float sum = *p1 + *p2;

    printf("Sum: %.2f\n", sum);

    return 0;
}