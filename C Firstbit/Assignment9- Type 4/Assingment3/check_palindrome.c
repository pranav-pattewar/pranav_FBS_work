// check if given number is palindrome or not  
#include<stdio.h>
int isPalindrome(int, int);// func declaration
void main()
{
	int no,org;
	printf("Enter number to check if palindrome or not:");
	scanf("%d",&no);
	org=no;
	isPalindrome(no,org);// func call
	if(isPalindrome(no,org))
	printf("Number %d is palindrome\n",org);
	else
	printf("Number %d is not palindrome\n",org);
} //main ends here
int isPalindrome(int no, int org) // func defination
{
	int r1,rev=0;
	while(no>0)
	{
		r1=no%10;
		rev=rev*10+r1;
		no=no/10;
	}
	if(org==rev)
	return 1;
	else 
	return 0;
}