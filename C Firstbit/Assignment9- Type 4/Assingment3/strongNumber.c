//check if number is strong or not 
#include <stdio.h>

int isStrongNumber(int);

void main()
{
    int num;
    printf("Enter a number to check if it is a Strong number: ");
    scanf("%d", &num);

    if (isStrongNumber(num))
        printf("Number %d is a Strong number", num);
    else
        printf("Number %d is not a Strong number", num);
}

int isStrongNumber(int no)
{
    int org = no, r, sum = 0, i, fact;

    while (no > 0)
    {
        r = no % 10;
        fact = 1;

        for (i = 1; i <= r; i++)
        {
            fact *= i;
        }

        sum += fact;
        no /= 10;
    }

    if (sum == org)
        return 1;
    else
        return 0;
}
