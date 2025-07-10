// palindrome 
#include<stdio.h>
void checkPalindrome(int);
void main()
{
	int no;
	printf("Enter number to check if palindrome or not:");
	scanf("%d",&no);
	checkPalindrome(no);
}
void checkPalindrome(int no)
{
	int org,r1,rev=0;
	
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