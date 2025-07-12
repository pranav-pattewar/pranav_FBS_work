//find if number is armstrong number
#include<stdio.h>
int checkArmstrong(int,int); // func declaration
void main()
{
	int no,org;
	printf("Enter any 3 digit number to check if it is armstrong number:");
	scanf("%d",&no);
	org=no;
	checkArmstrong(no,org);//func call 
	if(checkArmstrong(no,org))
	printf("Number %d is armstrong number",org);
	else
	printf("Number %d is not armstrong number",org);
} // main ends here
int checkArmstrong(int no,int org) //func defination
{
	int r1,sum=0,i;
	for(i=no;no>0;no=no/10)
	{
		r1=no%10;
		sum=sum+r1*r1*r1;
	}
	if (sum==org)
	return 1;
	else 
	return 0;
}