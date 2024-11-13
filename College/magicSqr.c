// Magic Square

void main()
{
    int m1[100][100], n, i, j, x = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    clrscr();

    printf("Enter order of sqr matrix:");
    scanf("%d", &n);

    printf("Enter values for matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Your matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    // sum rows
    for (i = 0; i < n; i++)
    {
        sum1 = 0;
        for (j = 0; j < n; j++)
        {
            sum1 += m1[i][j];
        }
        if (i == 0)
        {
            x = sum1;
            continue;
        }
        if (sum1 != x)
        {
            printf("Not magic square!!");
            break;
        }
    }

    // sum column
    for (i = 0; i < n; i++)
    {
        sum2 = 0;
        for (j = 0; j < n; j++)
        {
            sum2 += m1[j][i];
        }
        if (i == 0)
        {
            x = sum2;
            continue;
        }
        if (sum2 != x)
        {
            printf("Not magic square!!");
            break;
        }
    }

    // sum left diagonal
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum3 += m1[i][j];
            }
        }
    }

    // sum right diagonal
    for (i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        sum4 += m1[i][j];
    }

    // compare all sum
    if (sum1 == sum2 && sum1 == sum3 && sum1 == sum4)
    {
        printf("The matrix is a magic square!");
    }
    else
    {
        printf("The matrix is not a magic square!");
    }
    getch();
}