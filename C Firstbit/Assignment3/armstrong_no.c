//find if number is armstrong number
#include<stdio.h>
void main()
{
	int no,org,r1,sum=0;
	printf("Enter any number to check if it is armstrong number:");
	scanf("%d",&no);
	org=no;
	while(no>0)
	{
		r1=no%10;
		sum=sum+r1*r1*r1;
		no=no/10;	
	}
	if(sum==org)
	printf("Number %d is armstrong number",org);
	else
	printf("Number %d is not armstrong number",org);
}
