//Print prime no. till n using functions.

#include <stdio.h>
#include <conio.h>

void prime1(int);
void prime2();

void main()
{int n;
printf("Without return, with parameter\n");

printf("Enter the value of n:");
scanf("%d",&n);
prime1(n);
prime2();

getch();

}



void prime1(int n){
int i,j,flag;
for(j=1;j<=n;j++){
	flag=0;
	for(i=2;i<=j/2;i++){
		if(j%i==0){
			flag=1;
			break;
			}
		}
		if(flag==0 && j!=1){
			printf("%d ",j);
		}
	}
}



void prime2(){
int i,j,n,flag;
printf("\n\nWithout return, without parameter\n");

printf("Enter the value of n:");
scanf("%d",&n);

for(j=1;j<=n;j++){
	flag=0;
	for(i=2;i<=j/2;i++){
		if(j%i==0){
			flag=1;
			break;
			}
		}
		if(flag==0 && j!=1){
			printf("%d ",j);
		}
	}
}

