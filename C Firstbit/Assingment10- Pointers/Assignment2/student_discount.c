// student discount with conditions 
#include<stdio.h>
void calculateStudDis(float*, char*);
void main()
{
	float price;
	char stud;
	printf("Enter the price of your purchase:");
	scanf("%f",&price);
	printf("Are you student or not (only y/n) :");
	scanf(" %c",&stud);
	calculateStudDis(&price,&stud);
}
void calculateStudDis(float* price, char* stud)
{
	float dis=0;
	if(*stud=='y'|| *stud=='Y')
	{
		if(*price>500)
		{
			dis= .20* *price;
		}
		else
		{
			dis=0.10* *price;
		}	
	}
	else
	{
		if(*price>600)
		{
			dis= 0.15* *price;
		}
		else
		{
			dis=0;
		}
	}
	printf("Your discount is Rs.%f \n",dis);
	printf("Final price after discount is Rs.%f",*price-dis);
}




