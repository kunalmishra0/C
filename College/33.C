#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char s[50];
    int i, count=0;

    clrscr(); 

    printf("Enter string : ");
    gets(s); 

    for (i = 0; s[i] != '\0'; i++) {
        count++;
        }
	
    printf("The length of the string is: %d",count);
    getch(); 
}