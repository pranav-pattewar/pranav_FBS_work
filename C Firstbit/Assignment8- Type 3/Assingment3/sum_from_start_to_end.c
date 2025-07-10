//sum of numbers from start to end
#include <stdio.h>

void sumStoE(int, int);

void main()
{
    int start, end;
    printf("Enter start no. and end no.: ");
    scanf("%d%d", &start, &end);
    sumStoE(start, end); // pass values to the function
}

void sumStoE(int start, int end)
{
    int sum = 0;
    int a;
    for (a = start; a <= end; a++)
    {
        sum += a;
    }
    printf("Sum of numbers from %d to %d is %d\n", start, end, sum);
}
