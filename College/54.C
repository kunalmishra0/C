// Use binary search
#include <stdio.h>
#include <conio.h>

int Bsearch(int[], int, int, int);

int main()
{
    int a[100], n, i, j, temp, mid, item;
    printf("Enter size of array: ");
    scanf("%d", &n);

    // User input array
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sort array
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    //Sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Item to find
    printf("Enter item to be found: ");
    scanf("%d", &item);

    mid = Bsearch(a, 0, n - 1, item);

    if (mid == -1)
        printf("Item not found!\n");
    else
        printf("Item is found at index %d", mid);
    return 0;
}

int Bsearch(int a[], int low , int high, int item){
    int mid;
    if(low<=high){
        mid=(low+high)/2;

        if(a[mid]==item){
            return mid;
        }
        else if(item>a[mid]){
            return Bsearch(a, mid+1,high, item);
        }
        else{
            return Bsearch(a,low,mid-1,item);
        }
    }
    return -1;
}