#include <stdio.h>

int main() {
    float weight, height;
    scanf("%f %f", &weight, &height);

    float bmi = weight / (height * height);

    printf("BMI is %.2f\n", bmi);

    if(bmi >= 30) {
        printf("Obese\n");
    } else if (bmi >= 25) {
        printf("Over Weight\n");
    } else if (bmi >= 18.5) {
        printf("Normal Weight\n");
    } else {
        printf("Under Weight\n");
    }

    return 0;
}