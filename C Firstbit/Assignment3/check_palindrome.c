// palindrome 
#include<stdio.h>
void main()
{
	int no,org,r1,rev=0;
	printf("Enter number to check if palindrome or not:");
	scanf("%d",&no);
	org=no;
	while(no>0)
	{
		r1=no%10;
		rev=rev*10+r1;
		no=no/10;
	}
	if(org==rev)
	printf("Number %d is palindrome\n",org);
	else
	printf("Number %d is not palindrome\n",org);
}
