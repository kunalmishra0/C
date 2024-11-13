// String splitter
void main()
{
    int i = 0;
    char str1[100];
    clrscr();

    printf("Enter string to split:\n");
    gets(str1);

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", str1[i]);
        }
    }
    getch();
}