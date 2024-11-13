//Check if number is odd or even using functions

#include <stdio.h>
#include <conio.h>

void check1(int);
int check2();

void main()
{int n,z;
printf("Without return, with parameter\n");

printf("Enter the value of n:");
scanf("%d",&n);
check1(n);

printf("\n\nWith return without parameter.\n");
check2();

getch();

}



void check1(int n){

if(n%2==0){
	printf("The number %d is even",n);
	}
else{
	printf("The number %d is odd",n);
	}
}


int check2(){
int n;
printf("Enter the value of n:");
scanf("%d",&n);

if(n%2==0){
	printf("The number %d is even",n);
	}
else{
	printf("The number %d is odd",n);
	}
return n;
}
