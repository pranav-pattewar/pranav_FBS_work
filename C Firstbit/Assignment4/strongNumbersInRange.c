//print strong numbers in range 1 to n
#include<stdio.h>

void main()
{
    int i, j, n, num, r, fact, sum;
    printf("Enter value of n to print strong numbers from 1 to n: ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d are:\n", n);
    for(i = 1; i <= n; i++) // outer loop for each number
    {
        num = i;
        sum = 0;

        while(num > 0)
        {
            r = num % 10;
            fact = 1;

            for(j = 1; j <= r; j++) // inner loop to find factorial
            {
                fact = fact * j;
            }

            sum = sum + fact;
            num = num / 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }
}

