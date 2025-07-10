//sum of numbers from start to end

#include<stdio.h>

int sumStoE();

void main()
{
	int result = sumStoE();
	printf("Sum of numbers from start to end is %d", result);
}

int sumStoE()
{
	int start, end, sum = 0;
	printf("Enter start no. and end no.: ");
	scanf("%d%d", &start, &end);

	for(int i = start; i <= end; i++)
	{
		sum += i;
	}
	return sum;
}
