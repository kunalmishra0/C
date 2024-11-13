//Count no. of words and characters in String.

#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    int i, charCount = 0, wordCount = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        charCount++;
        if (str[i] == ' ' || str[i] == '\n' ) {
            wordCount++;
        }
    }
    if (i > 0) {
        wordCount++; 
    }

    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);

    getch();
}
