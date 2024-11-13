//To perform summation of arrays using functions
#include <stdio.h>
#include <conio.h>

int value1(int);
int value2();

void main()
{int n,y,z;

printf("With return, with parameter\n");

printf("No. of terms:");
scanf("%d",&n);
y=value1(n);
printf("Sum of array is: %d",y);

printf("\n\nWith return without parameter\n");
z=value2();
printf("Sum of array is: %d",z);
getch();

}


//Without return, With parameter
int value1(int n){
int i,s=0,a[100];
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}

for(i=0;i<n;i++){
	s=s+a[i];
	}

return s;
}

int value2(){
int n,i,s=0,a[100];
printf("No. of terms:");
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}

for(i=0;i<n;i++){
	s=s+a[i];
	}

return s;
}
