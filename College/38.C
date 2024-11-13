//Check whether palindrome or not using functions

#include <stdio.h>
#include <conio.h>

void Palindrome1(int);
void Palindrome2();

void main()
{int n;
printf("Enter value of n:");
scanf("%d",&n);

Palindrome1(n);
Palindrome2();
getch();

}


//Without return, With parameter
void Palindrome1(int n){
int i,rev=0,rem;
for(i=n;i>0;i=i/10){
	rem=i%10;
	rev=rev*10+rem;
	}

printf("For without return, with parameter:\n");

if(n==rev){
printf("Palindrome.\n");
}
else{
printf("Not palindrome.\n");
}

}

//Without return, Without parameter
void Palindrome2(){
int m,i,rev=0,rem;

printf("\n\nFor without return, without parameter:\n");
printf("Enter value of m:");
scanf("%d",&m);

for(i=m;i>0;i=i/10){
	rem=i%10;
	rev=rev*10+rem;
	}


if(m==rev){
printf("Palindrome.\n");
}
else{
printf("Not palindrome.\n");
}

}