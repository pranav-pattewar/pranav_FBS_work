// print prime numbers in given range 1 to n
#include<stdio.h>
void primeInRange(int*);
void main()
{
	int n;
	printf("Enter value of n to print prime numbers from 1 to n: ");
    scanf("%d", &n);
    primeInRange(&n);
}
void primeInRange(int* n)
{
	int i, j, flag;
    

    printf("Prime numbers from 1 to %d are:\n", *n);
    for(i = 2; i <= *n; i++) 
    {
        flag = 1;
        for(j = 2; j < i; j++) 
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            printf("%d ", i);
        }
    }
}
