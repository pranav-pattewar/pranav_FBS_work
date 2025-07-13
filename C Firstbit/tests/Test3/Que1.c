// ques 1- print even and odd numbers in given range 
#include <stdio.h>

void main()
{
    int start, end;
    printf("Enter range i.e start and end number: ");
    scanf("%d%d", &start, &end);

    printf("Even numbers: ");
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\nOdd numbers: ");
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
}
