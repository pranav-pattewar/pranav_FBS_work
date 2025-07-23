// ques 2- WAP Replace all Occurrences of ‘a’ with $ in a String
#include<stdio.h>
void main()
{
	char str[11];
	char ch;
	printf("Enter a string: \n");
	scanf("%s",str);
	printf("Entered string(original) :%s \n",str);
	
	for(int i=0;i<11;i++)
	{
		if(str[i]=='a')
		{
			str[i]='$';	
		}
	}
	
	printf("updated string with 'a' replaced is: %s",str);
}