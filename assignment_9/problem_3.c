#include <stdio.h>
#include<string.h>

int main() {
    char str[50];
    fgets(str, sizeof(str), stdin);

    int count = 0;

    for(int i = 0; i < strlen(str); i++) {
        char letter = str[i];
        if(
            letter == 'A' || letter == 'E'
            || letter == 'I' || letter == 'O'
            || letter == 'U' || letter == 'a' 
            || letter == 'e' || letter == 'i' 
            || letter == 'o' || letter == 'u'
        ) {
            count++;
        }
    }
    printf("Total vowel: %d", count);

    return 0;
}