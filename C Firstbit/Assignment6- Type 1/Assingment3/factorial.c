// factorial

#include<stdio.h>
void checkFactorial();
void main()
{
    checkFactorial();
}
void checkFactorial()
{
	int no, fact = 1, i = 1;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &no);

    while(i <= no)
    {
        fact = fact * i;
        i++;
    }

    printf("Factorial of %d is %d\n", no, fact);
}
