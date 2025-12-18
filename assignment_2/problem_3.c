#include <stdio.h>

int main()
{
    float base, height;
    scanf("%f %f", &base, &height);
    float area = 0.5 * base * height;
    printf("The Area of a Triangle is: %.2f\n", area);
    
    return 0;
}