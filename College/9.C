#include <stdio.h>
#include <conio.h>
int main() {
    int a,b,c,choice;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Remainder \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            c=a+b;
            printf("c=%d",c);
            break;
        case 2:
            c=a-b;
            printf("c=%d",c);
            break;
        case 3:
            c=a*b;
            printf("c=%d",c);
            break;
        case 4:
            c=a/b;
            printf("c=%d",c);
            break;
        case 5:
            c=a%b;
            printf("c=%d",c);
            break;
        default:
            printf("Enter any number from 1 to 5.");
    }
    getch();
    return 0;
}