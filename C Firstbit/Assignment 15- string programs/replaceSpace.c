// ques 6- WAP to Take in a String and Replace Every Blank Space with special symbol.

#include <stdio.h>

int main()
{
    char str[] = "hello world C";

    printf("Original string: %s\n", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            str[i] = '@';
        }
    }

    printf("Updated string: %s\n", str);

    return 0;
}
