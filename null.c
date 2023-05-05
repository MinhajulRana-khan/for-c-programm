#include <stdio.h>

int main() {
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);

    if (letter >= 'a' && letter <= 'z') {
        // letter is lowercase, convert to uppercase
        letter = letter - 32;
        printf("Uppercase letter: %c\n", letter);
    } else if (letter >= 'A' && letter <= 'Z') {
        // letter is uppercase, convert to lowercase
        letter = letter + 32;
        printf("Lowercase letter: %c\n", letter);
    } else {
        // letter is not a letter
        printf("Not a letter!\n");
    }

    return 0;
}

