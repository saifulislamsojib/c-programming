#include <stdio.h>

int main()
{
    char character;
    scanf("%c", &character);

    if(
        character == 'a' || character == 'e'
        || character == 'i' || character == 'o'
        || character == 'u' || character == 'A'
        || character == 'E' || character == 'I'
        || character == 'O' || character == 'U'
    ) {
        printf("vowel");
    } else {
        printf("consonant"); 
    }
    
    return 0;
}