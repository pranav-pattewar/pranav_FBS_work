//check if given character is uppercase of lowercase
#include<stdio.h>
void checkUppercaseLowercase(char);
void main()
{
	char ch;
	printf("Enter single character to check if uppercase or lowercase:");
	scanf("%c",&ch);
	checkUppercaseLowercase(ch);
}
void checkUppercaseLowercase(char ch)
{
	
	if(ch>='A'&&ch<='Z')
	{
		printf("Character is uppercase");
	}
	else if( ch>='a' && ch<='z' ){
		printf("Character is lowercase");
	}
	else{
		printf("you have entered invalid character");
	}
}