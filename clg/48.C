//Passing an array to a function

#include <stdio.h>
#include <conio.h>

int sum(int[], int);

int main(){
    int a[100],n,i,s;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    s=sum(a,n);
    printf("Sum of array elements: %d",s);
    getch();
    return 0;
}

int sum(int a[],int n){
    int sum=0,i;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}