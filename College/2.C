#include <stdio.h>

void main(){
	clrscr();
	int x,y,z;
	printf("Enter 1st int value:\n");
	scanf("%i",&x);

	printf("Enter 2nd int value:\n");
	scanf("%i",&y);

	z=x+y;

	printf("The sum of given integers is: %d",z);
}