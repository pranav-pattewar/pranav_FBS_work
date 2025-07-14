//print perfect numbers in range 1 to n
#include<stdio.h>
void perfectInRange(int*);
void main()
{
	int n;
	printf("Enter value of n to print perfect numbers from 1 to n: ");
    scanf("%d", &n);
    perfectInRange(&n);
}
void perfectInRange(int* n)
{
	int i, j, sum;

    printf("Perfect numbers from 1 to %d are:\n", n);
    for(i = 1; i <= *n; i++) // outer loop for each number
    {
        sum = 0;
        for(j = 1; j < i; j++) // inner loop to find divisors
        {
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }
        if(sum == i)
        {
            printf("%d ", i);
        }
    }
}
