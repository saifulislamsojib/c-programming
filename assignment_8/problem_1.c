#include <stdio.h>

float addition(float num1, float num2) {
    float sum = num1 + num2;
    return sum;
}

float subtraction(float num1, float num2) {
    float difference = num1 - num2;
    return difference;
}

float multiplication(float num1, float num2) {
    float product = num1 * num2;
    return product;
}

float division(float num1, float num2) {
    if (num2 == 0) {
        printf("Division by zero is not allowed.\n");
        return 0;
    }
    float quotient = num1 / num2;
    return quotient;
}

int main() {
    float num1, num2;
    scanf("%f %f", &num1, &num2);
    float add = addition(num1, num2);
    printf("Addition: %.2f\n", add);
    float sub = subtraction(num1, num2);
    printf("Subtraction: %.2f\n", sub);
    float mul = multiplication(num1, num2);
    printf("Multiplication: %.2f\n", mul);
    float div = division(num1, num2);
    if(num2 != 0) {
        printf("Division: %.2f\n", div);
    }
    return 0;
}