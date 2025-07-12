// factorial

#include<stdio.h>
int factorial(int); //func declaration
void main()
{
    int no;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &no);
	factorial(no);// func call
    printf("Factorial of %d is %d\n", no, factorial(no));
} //main ends here
int factorial(int no) //func defination
{
	int fact = 1, i = 1;
	while(i <= no)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}
