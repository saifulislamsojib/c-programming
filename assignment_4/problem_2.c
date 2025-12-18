#include <stdio.h>

int main() {
    char character;
    scanf("%c", &character);

    switch (character) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("vowel");
            break;
        default:
            printf("consonant");
    }
    
    return 0;
}