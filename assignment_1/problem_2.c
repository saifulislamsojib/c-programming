#include <stdio.h>

int main()
{
    float num1, num2, num3, avg;
    scanf("%f %f %f", &num1, &num2, &num3);

    avg = (num1 + num2 + num3) / 3;

    printf("Average is: %.2f", avg);

    return 0;
}