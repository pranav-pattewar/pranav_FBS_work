//check given character is vowel or consonant
#include<stdio.h>
void checkVowelConsonant(char*);
void main()
{
	char ch;
	printf("Enter single character to check if vowel or consonant: ");
	scanf("%c",&ch);
	checkVowelConsonant(&ch);
}
void checkVowelConsonant(char* ch)
{
	
	if(*ch=='a'|| *ch=='e'|| *ch=='i'|| *ch=='o'|| *ch=='u'|| *ch=='A'|| *ch=='E'|| *ch=='I'|| *ch=='O'|| *ch=='U'){
		printf("Character is vowel");
	}
	else
	{
		printf("Character is consonant");
	}
	
}