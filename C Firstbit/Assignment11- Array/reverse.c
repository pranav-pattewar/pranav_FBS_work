// que 9- reverse the given array
#include <stdio.h>

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

    for(int i = 0; i < n; i++) 
	{
        rev[n - 1 - i] = arr[i];
    }

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
