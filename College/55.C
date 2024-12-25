// Split INPUT file's content into ODD and EVEN files.

#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *f1, *f2, *f3;
    int n, i;
    printf("Enter the Data:\n ");
    f1 = fopen("INPUT.TXT", "w");
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &n);
        putw(n, f1);
    }
    fclose(f1);

    f1 = fopen("INPUT.TXT", "r");
    f2 = fopen("EVEN.TXT", "w");
    f3 = fopen("ODD.TXT", "w");
    while ((n = getw(f1)) != EOF)
    {
        if (n % 2 == 0)
            putw(n, f2);
        else
            putw(n, f3);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    getch();
    return 0;
}