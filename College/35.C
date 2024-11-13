//Reverse given string.

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char s[50];
    int i, count=0;

    printf("Enter string to be reversed: ");
    gets(s); 

    for (i = 0; s[i] != '\0'; i++) {
        count++;
        }
	
	for (i=count;i>=0;i--){
	printf("%c",s[i]);
    }

    getch(); 
}