// sum of first and last digit of number
#include<stdio.h>
void sumFL(int*);
void main()
{
	int no;
	printf("Enter any number: ");
    scanf("%d", &no);
    sumFL(&no);
}
void sumFL(int* no)
{
	int first, last, sum;

    last = *no % 10;  
    
    first = *no;
    while(first >= 10)
    {
        first = first / 10;
    }

    sum = first + last;

    printf("Sum of first and last digit is: %d", sum);
}
