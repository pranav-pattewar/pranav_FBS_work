//sum of numbers from start to end
#include<stdio.h>

int sumFromStoE(int, int);

void main()
{
    int start, end;
    printf("Enter start no. and end no.: ");
    scanf("%d%d", &start, &end);

    int result = sumFromStoE(start, end);
    printf("Sum of numbers from start to end is %d", result);
}

int sumFromStoE(int start, int end)
{
    int sum = 0;
    for(int i = start; i <= end; i++)
    {
        sum += i;
    }
    return sum;
}
