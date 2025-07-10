//check given character is vowel or consonant
#include<stdio.h>

int isVowel();
void main()
{
	if(isVowel())
		printf("Character is vowel");
	else
		printf("Character is consonant");
}

int isVowel()
{
	char ch;
	printf("Enter single character to check if vowel or consonant: ");
	scanf(" %c", &ch);
	
	return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
}
