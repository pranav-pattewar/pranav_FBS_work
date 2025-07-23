//mystrcpy
#include<stdio.h>
void mystrcpy(char* , char* ); //function declaration
void main()
{
	char* src = NULL;
	char dest[11];
//	if(src==NULL)
//	{
//		printf("String is empty, try again");
//	}
	printf("Enter a string:");
	scanf("%s",&src);
	printf("Original string: %s ",src); //original string 
	
	mystrcpy(dest,src); // funtion call
	printf("\nCopied string: %s ",dest); //copied string
	
} //main ends here
 
void mystrcpy(char* dest, char* src) // function defination
{
	int i;
	for(i=0;i<10;i++)
	{
		dest[i]=src[i];
	}
	dest[i]='\0';
}
