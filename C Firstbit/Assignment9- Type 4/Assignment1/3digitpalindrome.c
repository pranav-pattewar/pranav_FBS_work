//3 digit number is palindrome or not
#include<stdio.h>
int isPalindrome(int);
void main()
{
	int no;
	printf("Enter number to check if palindrome: ");
	scanf("%d",&no);
	isPalindrome(no);
	
	if(isPalindrome(no)==1)
	{
		printf(" Number is palindrome");
	}
	else{
		printf("Number is not palindrome ");
	}
}
int isPalindrome(int no)
{
	int org,rev,q1,r1,r2,r3;
	org=no;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	rev= r1*100+r2*10+r3;
	return (org==rev) ;
}       