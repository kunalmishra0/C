//fibonacci series using recursion
#include <stdio.h>
#include <conio.h>

int fib(int);

int main(){
    int n,i;

    printf("Enter value for N:");
    scanf("%d",&n);

    printf("Fibonacci Series: ");
    for(i=0;i<n;i++){
        printf("%d ",fib(i));
    }
    getch();
    return 0;
}

int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}