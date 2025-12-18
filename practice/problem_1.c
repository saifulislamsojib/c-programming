#include <stdio.h>

int main() {
    float num1, num2;
    scanf("%f %f", &num1, &num2);

    float temp = num1;
    num1 = num2;
    num2 = temp;

    printf("%.2f %.2f", num1, num2);

    return 0;
}