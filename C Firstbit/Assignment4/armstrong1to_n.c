//armstrong numbers from 1 to n
#include <stdio.h>

int main() {
    int num, i, temp, digit, sum;

    printf("Enter the upper limit (n): ");
    scanf("%d", &num);

    printf("Armstrong numbers from 1 to %d are:\n", num);

    for(i = 1; i <= num; i++) {
        temp = i;
        sum = 0;

        while(temp > 0) {
            digit = temp % 10;
            sum += digit * digit * digit; 
            temp = temp / 10;
        }

        if(sum == i) {
            printf("%d ", i);
        }
    }

}
