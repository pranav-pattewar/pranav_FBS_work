// sum of first and last digit of number
#include<stdio.h>

void main()
{
    int no, first, last, sum;

    printf("Enter any number: ");
    scanf("%d", &no);

    last = no % 10;  
    
    first = no;
    while(first >= 10)
    {
        first = first / 10;
    }

    sum = first + last;

    printf("Sum of first and last digit is: %d", sum);
}

