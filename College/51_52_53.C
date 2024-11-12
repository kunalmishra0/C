// Sorting Methods

#include <stdio.h>
#include <conio.h>

void BubbleSort(int[],int);
void SelectionSort(int[],int);
void InsertionSort(int[],int);

int main(){
    int a[100],N,i,j,choice;
    printf("Enter size of array: ");
    scanf("%d",&N);

    //Array Elements
    printf("Enter array elements:");
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }

    printf("How to sort you array? \n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort:\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        BubbleSort(a,N);
        break;
    case 2:
        SelectionSort(a,N);
        break;
    case 3:
        InsertionSort(a,N);
        break;
    default:
        break;
    }

    //Printing Sorted Array
    printf("The array after sorted is:\n");
    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

//Bubble Sort
void BubbleSort(int a[],int N){
    int temp,i,j;
    for(i=0;i<N-1;i++){
    for(j=0;j<N-1-i;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
}


//Selection Sort
void SelectionSort(int a[],int N){
    int temp,i,j,min;
    for(i=0;i<N;i++){
    min=i;
    for(j=i+1;j<N;j++){
        if(a[j]<a[min]){
            min=j;
        }
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
    }
}   
    
void InsertionSort( int a[], int N){
    int key,i,j;
    for(i=1;i<N;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]= a[j];
            j--;
        }
        a[j+1]=key;
    }
}