//factorial using recursion

#include <stdio.h>
#include <conio.h>

int fact(int);

int main(){
    int n,x;

    printf("Enter value for N:");
    scanf("%d",&n);

    x=fact(n);
    printf("Fatorial: %d",x);
    getch();
    return 0;
}

int fact(int n){
    if(n==0||n==-1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}