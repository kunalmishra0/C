//Print * pattern using functions

#include <stdio.h>
#include <conio.h>

void rightangle();
int equilateral(int);

void main()
{int n,z;


rightangle();

printf("\n\nEquilateral triangle star pattern\n");

printf("With return, with parameter\n");

printf("Enter no. of rows:");
scanf("%d",&n);
equilateral(n);

getch();

}

void rightangle(){
int n,i,j;
printf("Right Angle Star pattern\n");

printf("Without return, without parameter\n");

printf("Enter the value of n:");
scanf("%d",&n);

for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
		printf("*");
	}
	printf("\n");
  }

}

int equilateral(int n){
int i,j,space;

for(i=1;i<=n;i++){
	for(space=n-i;space>0;space--){
		printf(" "); }
	for(j=1;j<=i;j++){
		printf("* ");
	   }
	printf("\n");
  }

return n;
}
