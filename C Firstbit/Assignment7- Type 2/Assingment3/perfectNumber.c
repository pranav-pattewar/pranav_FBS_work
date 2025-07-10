//check if number is perfect or not 

#include<stdio.h>

int isPerfect();

void main()
{
	if(isPerfect())
		printf("Number is a Perfect number");
	else
		printf("Number is not a Perfect number");
}

int isPerfect()
{
	int no, i, sum = 0;
	printf("Enter a number to check if it is a Perfect number: ");
	scanf("%d", &no);

	for(i = 1; i < no; i++)
	{
		if(no % i == 0)
		{
			sum = sum + i;
		}
	}

	return (sum == no);
}
