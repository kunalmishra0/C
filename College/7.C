
#include <stdio.h> 
#include <conio.h>

void main()
{
int a,b,c; 
clrscr();
printf(" The value of a is:"); 
scanf("%d ", &a);
printf(" The value of b is:");
scanf("%d ", &b);
printf("The value of c is: ");
scanf("%d", &c);

if (a>b)
{if (a>c)
    printf(" The largest number among %d, %d, %d, is %d.", a, b, c, a ); 
 else
    printf(" The largest number among %d, %d, %d is %d.",a, b, c, b);
}
else
{if (b>c)
    printf(" The largest number among %d, %d, %d is %d.",a, b, c, b);
 else
    printf(" The largest number among %d, %d, %d is %d.",a, b, c, c);
}
getch();
}