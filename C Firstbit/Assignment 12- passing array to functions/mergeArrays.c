//merge two arrays using a function
#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int arr3[]);

void main()
{
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter %d elements for first array:\n", n1);
    for(int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter %d elements for second array:\n", n2);
    for(int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int arr3[n1 + n2];

    mergeArrays(arr1, n1, arr2, n2, arr3);

    printf("Merged Array: ");
    for(int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", arr3[i]);
    }
}

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    for(int i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }

    for(int i = 0; i < n2; i++)
    {
        arr3[n1 + i] = arr2[i];
    }
}
