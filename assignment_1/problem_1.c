#include <stdio.h>

int main()
{
    float num1, num2, addition, subtraction, multiplication, division;
    scanf("%f %f", &num1, &num2);

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    
    printf("Addition is: %.2f\n", addition);
    printf("Subtraction is: %.2f\n", subtraction);
    printf("Multiplication is: %.2f\n", multiplication);

    if (num2 != 0) {
        division = num1 / num2;
        printf("Division is: %.2f\n", division);
    } else {
        printf("Division not possible!");
    }

    return 0;
}