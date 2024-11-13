#include <stdio.h>
#include <conio.h>

// String Comparison
void main()
{
    char str1[100], str2[100];
    int i = 0, flag = 0;

    printf("Enter string1: ");
    gets(str1);
    printf("Enter string2: ");
    gets(str2);

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] > str2[i])
        {
            flag = 1;
            break;
        }
        else if (str1[i] == str2[i])
        {
            continue;
        }
        else if (str1[i] < str2[i])
        {
            flag = 2;
            break;
        }
        i++;
    }

    if (flag == 1)
    {
        printf("str1 > str2");
    }
    else if (flag == 0)
    {
        printf("str2 = str1");
    }
    else if (flag == 2)
    {
        printf("str2>str1");
    }

    getch();
}
