// que 9- WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions

#include <stdio.h>
int mystrlen(char*); // declaration
void main() 
{
    char str1[100], str2[100];
    int len1, len2;
    
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // lengths using user-defined function
    len1 = mystrlen(str1);
    len2 = mystrlen(str2);

    // Compare strings
    if(len1 > len2)
        printf("Larger string is: %s\n", str1);
    else if(len2 > len1)
        printf("Larger string is: %s\n", str2);
    else
        printf("Both strings are equal in length.\n");

}

// defination 
int mystrlen(char* str)
{
    int i=0,count=0;

    if(str[0]=='\0') {
        printf("String does not exist\n");
        return 0;
    }

    while(str[i]!='\0')
    {
        count++;
        i++;
    }

    return count;
}

