//Print n terms of fibonacci series using functions

#include <stdio.h>
#include <conio.h>

void fibonacci1(int);
int fibonacci2();

void main()
{int n,z;

printf("Without return, with parameter\n");

printf("Enter no. of terms:");
scanf("%d",&n);
fibonacci1(n);
fibonacci2();

getch();

}



void fibonacci1(int n){
int a=0,b=1,c,i;
printf("%d %d ",a,b);

for(i=3;i<=n;i++){
	c=a+b;
	printf("%d ",c);
	a=b;
	b=c;
   }

}

int fibonacci2(){
int a=0,b=1,c,i,n;
printf("\n\nWith return, without parameter\n");

printf("Enter no. of terms:");
scanf("%d",&n);

printf("%d %d ",a,b);

for(i=3;i<=n;i++){
	c=a+b;
	printf("%d ",c);
	a=b;
	b=c;
   }

return a,b,c;
}
