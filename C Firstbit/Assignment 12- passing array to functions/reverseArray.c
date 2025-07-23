//reverse the given array using a function
#include <stdio.h>

void reverseArray(int arr[], int rev[], int n);

void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], rev[n];

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++)
	{
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, rev, n);

    printf("\nOriginal Array: ");
    for(int i = 0; i < n; i++)
	{
        printf("%d ", arr[i]);
    }

    printf("\nReversed Array: ");
    for(int i = 0; i < n; i++)
	{
        printf("%d ", rev[i]);
    }
}

void reverseArray(int arr[], int rev[], int n)
{
    for(int i = 0; i < n; i++)
	{
        rev[i] = arr[n - 1 - i];
    }
}
