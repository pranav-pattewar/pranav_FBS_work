// ques 2- Write a program in C to find two maximum number in array
#include <stdio.h>

void main() 
{
    int arr[5], max1, max2;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) scanf("%d", &arr[i]);

    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    for (int i = 2; i < 5; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("First maximum: %d\n", max1);
    printf("Second maximum: %d\n", max2);

}

