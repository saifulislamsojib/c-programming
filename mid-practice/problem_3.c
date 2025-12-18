#include <stdio.h>
#include <math.h>
// Write a C program to find
//  the simple interest and compound interest.
int main() {
    float main_amount, rate, time;
    scanf("%f %f %f", &main_amount, &rate, &time);

    float simple = (main_amount * rate * time) / 100.0;
    printf("Simple= %.2f\n", simple);
    float compound = (main_amount * pow(1.0 + (rate / 100.0), time)) - main_amount;
    printf("compound= %.2f\n", compound);

    return 0;
}