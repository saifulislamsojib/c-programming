#include <stdio.h>

const float PI = 3.1416;

int main() {
    float radius;
    scanf("%f", &radius);
    float area = PI * radius * radius;
    printf("The area of circle is: %.2f", area);
    return 0;
}