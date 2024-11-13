#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int n,m,i;
    long int term=1;
    float x,sum=0;

    printf("Value of n= ");
    scanf("%d",&n);
    printf("Value of m= ");
    scanf("%d",&m);

    printf("Series: ");

    for(i=1;i<=m;i++){
        term=pow(n,i);
        x=1/float(term);
        sum+=x;
        printf("1/%d ",term);
    }
    printf("\nSum: %f",sum);

    return 0;
}

