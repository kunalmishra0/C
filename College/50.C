//create student database using struct
#include <stdio.h>

struct StudentInfo
{
    char Name[10];
    int Roll;
    char Sec;
    float AvgMarks;
};

int main(){
    struct StudentInfo s[5];
    int i;
    printf("Enter details for 5 students.\n\n");
    for(i = 0; i < 5; i++){
        printf("Enter name: ");
        scanf("%s", &s[i].Name);

        printf("Enter roll no: ");
        scanf("%d", &s[i].Roll);

        printf("Enter section: ");
        scanf(" %c", &s[i].Sec);

        printf("Enter average marks: ");
        scanf("%f", &s[i].AvgMarks);

        printf("\n");
    }
    return 0;
}
