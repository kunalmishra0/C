// Remove spaces

void main()
{
    int i = 0;
    char str1[100];
    clrscr();

    printf("Enter string to remove spaces from:\n");
    gets(str1);

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == ' ')
        {
            str1[i] = str1[i + 1];
        }
        else
        {
            continue;
        }
    }

    printf("On removing the spaces you get:\n");
    for (i = 0; str1[i] != '\0'; i++)
    {
        printf("%c", str1[i]);
    }
    getch();
}
