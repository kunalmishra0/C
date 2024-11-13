// Sum of diagonal elements of matrix

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[100][100], i, j, n;
    int sum = 0;

    printf("Enter value of dimension for square matrix: ");
    scanf("%d", &n);
    printf("Enter values for elements: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of diagonal elements
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of diagonal elements: %d", sum);
    getch();
}
