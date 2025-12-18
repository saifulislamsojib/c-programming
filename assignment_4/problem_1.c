#include <stdio.h>

int main() {
    int mark;
    scanf("%d", &mark);

    switch(mark/10) {
        case 10:
        case 9:
        case 8:
            printf("A\n");
            break;
        case 7:
            printf("B\n");
            break;
        case 6:
            printf("C\n");
            break;
        case 5:
            printf("D\n");
            break;
        default:
            printf("F\n");
    }
    return 0;
}