#include <stdio.h>

void main(){
	int x,y,z;
	clrscr();
	
	printf("Enter 1st int value:\n");
	scanf("%d",&x);

	printf("Enter 2nd int value:\n");
	scanf("%d",&y);

	z=x+y;

	printf("The sum of given integers is: %d",z);
}