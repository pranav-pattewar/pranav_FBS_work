//check if given character is uppercase of lowercase
#include<stdio.h>
int checkUpperLower(char);
void main()
{
	char ch;
	printf("Enter single character to check if uppercase or lowercase:");
	scanf("%c",&ch);
	checkUpperLower(ch);
	if (checkUpperLower(ch)==1)
	printf("Character is uppercase");
	else if (checkUpperLower(ch)==2)
	printf("Character is lowercase");
	else
	printf("you have entered invalid character");
	
}
int checkUpperLower(char ch)
{
	if(ch>='A'&&ch<='Z')
	{
		return 1;
	}
	else if( ch>='a' && ch<='z' )
	{
		return 2;
	}
	else
	{
		return 3;
	}
}