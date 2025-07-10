// factorial

#include<stdio.h>
void checkFactorial(int);
void main()
{
	int no;
	printf("Enter a number to find its factorial: ");
    scanf("%d", &no);
    checkFactorial(no);
}
void checkFactorial(int no)
{
	int fact = 1, i = 1;

    while(i <= no)
    {
        fact = fact * i;
        i++;
    }

    printf("Factorial of %d is %d\n", no, fact);
}
