#include<stdio.h>

// int main() {
//     char letter;
//     scanf("%c", &letter);
//     if (letter >= 'A' && letter <= 'Z') {
//         printf("%c", letter + 32);
//     } else {
//         printf("The letter should be A to Z"); 
//     }
//     return 0;
// }
int main() {
    char letter;
    scanf("%c", &letter);
    if (letter >= 'a' && letter <= 'z') {
        printf("%c", letter - 32);
    } else {
        printf("The letter should be a to z"); 
    }
    return 0;
}