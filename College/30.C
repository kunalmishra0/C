//Print upper and lower triangle for a matrix.

#include <stdio.h>
#include <conio.h>

void main() {
    int a[100][100], u[100][100], l[100][100];
    int i, j, n;

    clrscr();
    printf("Enter dimension: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Upper Triangle
    printf("The Upper Triangle is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i <= j) {
                u[i][j] = a[i][j];
            } else {
                u[i][j] = 0;
            }
            printf("%d ", u[i][j]);
        }
        printf("\n");
    }

    // Lower Triangle
    printf("The Lower Triangle is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i >= j) {
                l[i][j] = a[i][j];
            } else {
                l[i][j] = 0;
            }
            printf("%d ", l[i][j]);
        }
        printf("\n");
    }

    getch();
}
