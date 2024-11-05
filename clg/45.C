//Passing pointers to function

#include <stdio.h>
#include <conio.h>

void swap(int *, int *);

int main(){
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Old values: \na=%d,b=%d",a,b);

    swap(&a,&b);
    printf("\nNew values: \na=%d,b=%d",a,b);
    getch();
    return 0;
}

void swap(int *a, int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}