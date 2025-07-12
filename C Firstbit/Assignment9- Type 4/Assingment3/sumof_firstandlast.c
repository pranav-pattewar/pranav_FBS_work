// sum of first and last digit of number
#include<stdio.h>
int sumOfFL(int);
void main()
{
    int no;
    printf("Enter any number: ");
    scanf("%d", &no);
	sumOfFL(no);
    printf("Sum of first and last digit is: %d", sumOfFL(no));
}
int sumOfFL(int no)
{
	int first, last;
	last = no % 10;  
    
    first = no;
    while(first >= 10)
    {
        first = first / 10;
    }

    return (first + last);

}

