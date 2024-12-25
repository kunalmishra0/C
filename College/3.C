#include <stdio.h>

void main()
{
    float c, f;
    clrscr();
    printf("Enter the value of temperature in degree celsius: ");
    scanf("%f", &c);

    f = 1.8 * c + 32;
    printf("The temperature in fahrenheit is: %f\n");

    printf("Enter the value of temperature in degree fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) / 1.8;
    printf("The temperature in celsius is: %f", c);

    getch();
}
