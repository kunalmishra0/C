// Snake pattern

void main()
{
    int m[100][100], n, i = 0, j = 0;
    clrscr();

    printf("Enter order of sqr matrix:");
    scanf("%d", &n);

    printf("Enter values for matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    printf("Your matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Output:");
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ", m[i][j]);
            }
        }
        if (i % 2 != 0)
        {
            for (j = n - 1; j >= 0; j--)
            {
                printf("%d ", m[i][j]);
            }
        }
    }

    getch();
}