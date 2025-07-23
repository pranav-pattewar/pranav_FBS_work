//mystrchr
#include<stdio.h>
int mystrchr(char*, char);//decalration 
void main()
{
	char str[11];
	char ch;
	printf("Enter a string:");
	scanf("%s",&str);
	printf("\nEnter a character to find in array: ");
	fflush(stdin);
	scanf("%c",&ch);
	int pos=mystrchr(str,ch); //function call
	
	printf("\ncharacter %c found at position: %d",ch,pos);
} //main ends here 
int mystrchr(char* str, char ch) //definaton
{
	int i;
	for(i=0;i<10;i++)
	{
		if(str[i]==ch)
		{
			return i;
		}
	}
}