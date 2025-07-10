// palindrome 

#include<stdio.h>

int isPalindrome();

void main()
{
	if(isPalindrome())
		printf("Number is palindrome");
	else
		printf("Number is not palindrome");
}

int isPalindrome()
{
	int no, org, r1, rev = 0;
	printf("Enter number to check if palindrome or not: ");
	scanf("%d", &no);
	org = no;

	while(no > 0)
	{
		r1 = no % 10;
		rev = rev * 10 + r1;
		no = no / 10;
	}

	return (org == rev);
}
