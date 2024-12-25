#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, x, y, u, v, w, M, N, z;
    clrscr();
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    z = (x < y) << (a >= b);
    printf("z = %d\n", z);
    u = (x < y) >> (a >= b);
    printf("u = %d\n", u);
    v = (x < y) ^ (a >= b);
    printf("v = %d\n", v);
    w = (x < y) || (a >= b);
    printf("w = %d\n", w);
    M = (x < y) && (a >= b);
    printf("M = %d\n", M);
    N = (x < y) || (a >= b);
    printf("N = %d\n", N);
    getch();
}
