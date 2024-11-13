//Count no. of vowels and consonants

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char s[50];
    int i, c=0,v=0;

    printf("Enter a string: ");
    gets(s); 

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
            s[i] == 'o' || s[i] == 'u' || 
            s[i] == 'A' || s[i] == 'E' || 
            s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            v++;
        }
	
	else if(s[i]==' ')
	{
	  continue;
	}

	else
	{
	  c++;
	}
	}

	printf("The no. of vowels are: %d", v);
	printf("\nThe no. of consonants are: %d", c);
	getch();
}