//find if number is armstrong number
#include<stdio.h>
void checkArmstrong(int);
void main()
{
	int no;
	printf("Enter any 3 digit number to check if it is armstrong number:");
	scanf("%d",&no);
	checkArmstrong(no);
}
void checkArmstrong(int no)
{
	int org,r1,sum=0,i;
	org=no;
	/*while(no>0)
	{
		r1=no%10;
		sum=sum+r1*r1*r1;
		no=no/10;	
	}*/
	for(i=no;no>0;no=no/10)
	{
		r1=no%10;
		sum=sum+r1*r1*r1;
	}
	if(sum==org)
	printf("Number %d is armstrong number",org);
	else
	printf("Number %d is not armstrong number",org);
}
