#include<stdio.h>

struct student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    struct student sojib;
    fgets(sojib.name, sizeof(sojib.name), stdin);
    scanf("%d %f", &sojib.roll_number, &sojib.marks);

    printf("%s", sojib.name);
    printf("%d\n", sojib.roll_number);
    printf("%.2f\n", sojib.marks);

    return 0;
}