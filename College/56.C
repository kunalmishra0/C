// count the number of occurrence of a word in the given file

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    FILE *f1;
    char ch1,str2[10],text[200],word[30];
    int count = 0;
    f1=fopen("TEXT","w");
    printf("Enter text:\n");
    getchar();  
    fgets(text, sizeof(text), stdin);
    fprintf(f1, "%s", text);
    fclose(f1);

    printf("Enter the word \n");
    scanf("%s",&word);
    f1=fopen("TEXT", "r");
    while (!feof(f1))
    {
        fscanf(f1, "%s", str2);
        if (!strcmp(word, str2))
            count++;
    }
    if (count == 0)
        printf("'%s' does not exist", word);
    else
        printf("'%s' exists with %d occurence.", word, count);
    fclose(f1);
    getch();
}