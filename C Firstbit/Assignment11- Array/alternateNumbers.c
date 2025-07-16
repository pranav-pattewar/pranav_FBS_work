// que 5- Print alternate elements in array.
#include <stdio.h>

void main() {
    int arr[10];

    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Alternate elements in the array are:\n");
    for(int i = 0; i < 10; i += 2) {
        printf("%d ", arr[i]);
    }
}
