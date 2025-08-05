//Write a program in C for, to find common elements in two arrays.
#include <stdio.h>

void main() 
{
    int arr[5], brr[5];
    printf("Enter 5 elements for first array: ");
    for (int i = 0; i < 5; i++) scanf("%d", &arr[i]);

    printf("Enter 5 elements for second array: ");
    for (int i = 0; i < 5; i++) scanf("%d", &brr[i]);

    printf("Common elements: ");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i] == brr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");
}
