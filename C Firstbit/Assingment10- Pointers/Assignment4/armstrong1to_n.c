//armstrong numbers from 1 to n
#include <stdio.h>
void armstrong(int*);
void main() 
{
	int num;
	printf("Enter the upper limit (n): ");
    scanf("%d", &num);
    armstrong(&num);
}
void armstrong(int* num)
{
	int i, temp, digit, sum;

    printf("Armstrong numbers from 1 to %d are:\n", *num);

    for(i = 1; i <= *num; i++) {
        temp = i;
        sum = 0;

        while(temp > 0) {
            digit = temp % 10;
            sum += digit * digit * digit; // cube of digit
            temp = temp / 10;
        }

        if(sum == i) {
            printf("%d ", i);
        }
    }
}
