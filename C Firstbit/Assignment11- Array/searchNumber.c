// que 2 - search given number in array
#include <stdio.h>

void main() {
    int arr[6];
    printf("Enter 6 numbers in array: ");
    for(int i = 0; i < 6; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("\nNumbers in array are:");
    for(int i = 0; i < 6; i++) 
	{
        printf(" %d", arr[i]);
    }

    // code for searching
    printf("\nEnter a number to find in array: ");
    int no;
    scanf("%d", &no);

    int indices[6];  // array to store indices where number is found
    int count = 0;   // to count occurrences

    for(int i = 0; i < 6; i++) {
        if(no == arr[i]) {
            indices[count] = i;  // store index
            count++;
        }
    }

    if(count > 0) {
        printf("--> Number %d found %d time(s) at index/indices: ", no, count);
        for(int i = 0; i < count; i++) {
            printf("%d ", indices[i]);
        }
    } else {
        printf("--> Number %d not found in the array", no);
    }
}
