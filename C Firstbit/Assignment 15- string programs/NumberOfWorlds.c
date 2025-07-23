// ques 8- WAP to Calculate the Number of Words Present in a String

#include <stdio.h>

int main() 
{
    char str[] = "I love coding in C language";
    int i, words = 0;

    for(i = 0; str[i] != '\0'; i++) 
    {
        if((i == 0 && str[i] != ' ') || (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')) 
        {
            words++;
        }
    }

    printf("The string is: %s\n", str);
    printf("Number of words: %d\n", words);

    return 0;
}
