#include <stdio.h>
#include <ctype.h>

void checkCharacterType(char c) {
    if (isalpha(c)) { 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else if (isdigit(c)) { 
        printf("Digit\n");
    } else { 
        printf("Special Character\n");
    }
}

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    checkCharacterType(c);

    return 0;
}
