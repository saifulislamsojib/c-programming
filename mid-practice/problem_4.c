#include <stdio.h>
#include <math.h>

int main() {
    double num;
    scanf("%lf", &num);
    double result = sqrt(num);
    printf("%.2lf", result);
    return 0;
} 