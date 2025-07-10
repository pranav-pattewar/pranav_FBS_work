//check if given character is uppercase of lowercase

#include<stdio.h>

int checkCase();
void main()
{
	int result = checkCase();
	if(result == 1)
		printf("Character is uppercase");
	else if(result == 0)
		printf("Character is lowercase");
	else
		printf("You have entered an invalid character");
}

int checkCase()
{
	char ch;
	printf("Enter single character to check if uppercase or lowercase: ");
	scanf(" %c", &ch);

	if(ch >= 'A' && ch <= 'Z')
		return 1;
	else if(ch >= 'a' && ch <= 'z')
		return 0;
	else
		return -1;
}
