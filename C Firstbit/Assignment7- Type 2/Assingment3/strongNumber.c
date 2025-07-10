//check if number is strong or not 

#include<stdio.h>

int isStrong();

void main()
{
	if(isStrong())
		printf("Number is a Strong number");
	else
		printf("Number is not a Strong number");
}

int isStrong()
{
	int no, org, r, sum = 0, i, fact;
	printf("Enter a number to check if it is a Strong number: ");
	scanf("%d", &no);
	org = no;

	while(no > 0)
	{
		r = no % 10;
		fact = 1;
		for(i = 1; i <= r; i++)
		{
			fact = fact * i;
		}
		sum = sum + fact;
		no = no / 10;
	}

	return (sum == org);
}
