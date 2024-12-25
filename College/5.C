#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    float P, r, t, SI, n, x, y, z, k, CI;
    clrscr();
    printf("The amount to be deposited is: ");
    scanf("%f", &P);
    printf("The rate of interest is: ");
    scanf("%f", &r);
    printf("The time for which the amount is to be kept: ");
    scanf("%f", &t);
    printf("The number of times the compound per year is: ");
    scanf("%f", &n);
    SI = (P * r * t) / 100;
    printf("The simple interest is: %f\n", SI);
    x = 1 + (r / 100);
    y = n * t;
    z = pow(x, y);
    k = P * z;
    CI = k - P;
    printf("Compound interest: %f", CI);
    getch();
}
