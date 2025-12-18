#include <stdio.h>

float square(float num) {
    float square = num * num;
    return square;
}

int main() {
    float num;
    scanf("%f", &num);
    float result = square(num);
    printf("Square: %.2f\n", result);
    return 0;
}  