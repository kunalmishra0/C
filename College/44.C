//Matrix Addition using functions

#include <stdio.h>
#include <conio.h>

void sum();

void main()
{   
	sum();
	getch();
}

void sum()
{
    int a[100][100], b[100][100], c[100][100], i, j, r1, r2, c1, c2;

    printf("Without return without parameter\n");

    printf("Enter the number of rows for A matrix: ");
    scanf("%d", &r1);

    printf("Enter the number of columns for A matrix: ");
    scanf("%d", &c1);

    printf("Enter the number of rows for B matrix: ");
    scanf("%d", &r2);

    printf("Enter the number of columns for B matrix: ");
    scanf("%d", &c2);

    if (r1 != r2 || c1 != c2)
    {
        printf("Matrix sum not possible.\n");
    }
    else
    {
        printf("Enter the elements of Matrix A:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("The matrix A is:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

        printf("Enter the elements of Matrix B:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        printf("The matrix B is:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }

        printf("The addition of A and B matrices is:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        printf("The matrix C is:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
}