// student discount with conditions 
#include<stdio.h>
float studentDis(float,char);// func declaration
void main()
{
	float price;
	char stud;
	printf("Enter the price of your purchase:");
	scanf("%f",&price);
	printf("Are you student or not (only y/n) :");
	scanf(" %c",&stud);
	studentDis(price,stud); //function call
	
	printf("Your discount is Rs.%f \n",studentDis(price,stud));
	printf("Final price after discount is Rs.%f",price-studentDis(price,stud));
} //main ends here 
float studentDis(float price,char stud) // func defination
{
	float dis=0;
	if(stud=='y'|| stud=='Y')
	{
		if(price>500)
		{
			dis= .20*price;
		}
		else
		{
			dis=0.10*price;
		}	
	}
	else
	{
		if(price>600)
		{
			dis= 0.15*price;
		}
		else
		{
			dis=0;
		}
	}
	return dis;
}




