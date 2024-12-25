#include <stdio.h>
#include <conio.h>
int main() {
    float a,b,c,d,e,avg ;
    
    printf("Enter five subject marks:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);

    avg=(a+b+c+d+e)/5;

    printf("Percentage:%d",&avg);

    if(avg>=90){
        printf("Grade A\n");
    }
    else if(avg>=80){
        printf("Grade B\n");
    }
    else if(avg>=70){
        printf("Grade C\n");
    }
    else if(avg>=60){
        printf("Grade D\n");
    }
    else{
        printf("Grade Fail\n");
    }
    getch();
    return 0;
}