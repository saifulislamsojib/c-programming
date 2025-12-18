#include <stdio.h>

int main() {
    float num1, num2;
    char action;
    scanf("%f %f %c", &num1, &num2, &action);
    
    switch (action) {
        case '+':
            printf("%.2f\n", num1 + num2);
            break;
        case '-':
            printf("%.2f\n", num1 - num2);
            break;
        case '*':
            printf("%.2f\n", num1 * num2);
            break;
        case '/':
            if(num2 == 0) {
                printf("Divisor can't be 0\n"); 
                break;
            }
            printf("%.2f\n", num1  / num2); 
            break;
        default:
            printf("Invalid action!\n");
        
    }

    return 0;
}