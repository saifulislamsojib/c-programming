#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    int end_idx = length - 1, is_palindrome = 1;

    for(int i = 0; i < length; i++) {
        if(str[i] != str[end_idx]) {
            is_palindrome = 0;
            break;
        }
        end_idx--;
    }
    
    if(is_palindrome) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}