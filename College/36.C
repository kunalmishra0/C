//To use in-built string functions
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char str1[100], str2[100], str3[100], str4[100], str5[100];


    printf("Enter a string for str1: ");
    gets(str1);

    printf("Enter a string for str2: ");
    gets(str2);

    printf("Enter a string for str3: ");
    gets(str3);

    printf("Enter a string for str4: ");
    gets(str4);

    printf("Enter a string for str5: ");
    gets(str5);

    printf("Length of str1: %d\n", strlen(str1));
    printf("Copied str2: %s\n", strcpy(str1, str2));
    
    strcat(str1, " How are you?");
    printf("Concatenated str1: %s\n", str1);

    printf("Compare str3 with 'Apple': %d\n", strcmp(str3, "Apple"));

    printf("Find 'W' in str1: %s\n", strchr(str1, 'W'));

    strlwr(str4);
    printf("Lowercase str4: %s\n", str4);

    strupr(str5);
    printf("Uppercase str5: %s\n", str5);

	strrev(str1);
	printf("Reversed str1: %s\n", str1);

    getch();
}
