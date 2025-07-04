// calculate total electricity bill
#include<stdio.h>
void main()
{
	int units,bill;
	printf("Enter number of units consumed: ");
	scanf("%d",&units);
	if(units>=1 && units<=50)
	{
		bill=units*30;
	}
	else if(units>=51 && units<=150)
	{
		bill=units*40;
	}
	else 
	{
		bill=units*50;
	}
	printf("Your total Electricity bill is RS.%d for %d units",bill,units);
}
