#include <stdio.h>
#include <conio.h>

void main() {
    float r, area, perimeter;
    clrscr();
    printf("The value of radius is: ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    printf("The value of area is: %f\n", area);
    perimeter = 2 * 3.14 * r;
    printf("The value of perimeter is: %f", perimeter);
    getch();
}
