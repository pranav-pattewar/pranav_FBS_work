//search given number in array using a function
#include <stdio.h>

void searchNumber(int arr[], int size, int num, int* count, int indices[]);

void main()
{
    int arr[6];
    int size = 6;

    printf("Enter %d numbers in array: ", size);
    for(int i = 0; i < size; i++)
	{
        scanf("%d", &arr[i]);
    }

    printf("\nNumbers in array are:");
    for(int i = 0; i < size; i++)
	{
        printf(" %d", arr[i]);
    }

    printf("\nEnter a number to find in array: ");
    int no;
    scanf("%d", &no);

    int indices[size];
    int count = 0;

    searchNumber(arr, size, no, &count, indices);

    if(count > 0)
    {
        printf("--> Number %d found %d time(s) at index/indices: ", no, count);
        for(int i = 0; i < count; i++)
        {
            printf("%d ", indices[i]);
        }
    }
    else
    {
        printf("--> Number %d not found in the array", no);
    }
}

void searchNumber(int arr[], int size, int num, int* count, int indices[])
{
    *count = 0;
    for(int i = 0; i < size; i++)
    {
        if(num == arr[i])
        {
            indices[*count] = i;
            (*count)++;
        }
    }
}
