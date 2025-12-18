#include <stdio.h>

int main()
{
    int dividend, divisor;
    scanf("%d %d", &dividend, &divisor);

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    printf("The Quotient is: %d\n", quotient);
    printf("The Remainder is: %d\n", remainder);
    return 0;
}