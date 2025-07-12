//check given character is vowel or consonant
#include<stdio.h>
int checkVowelConsonant(char);
void main()
{
	char ch;
	printf("Enter single character to check if vowel or consonant: ");
	scanf("%c",&ch);
	checkVowelConsonant(ch);
	if( checkVowelConsonant(ch)==1 )
	{
		printf("Character is vowel");
	}
	else
	{
		printf("Character is consonant");
	}
	
}
int checkVowelConsonant(char ch)
{
	return((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'));
}
