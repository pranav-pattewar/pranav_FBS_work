// Print alternate elements in array using a function
#include <stdio.h>

void printAlternateElements(int arr[], int size);

void main()
{
    int arr[10];
    int size = 10;

    printf("Enter %d numbers:\n", size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printAlternateElements(arr, size);
}

void printAlternateElements(int arr[], int size)
{
    printf("Alternate elements in the array are:\n");
    for(int i = 0; i < size; i += 2)
    {
        printf("%d ", arr[i]);
    }
}
