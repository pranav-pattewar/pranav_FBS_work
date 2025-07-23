// Q3 - WAP to Remove the nth Index Character from a Non-Empty String
#include<stdio.h>

int main()
{
    char str[] = "helloworld";
    int n, i;
	printf("String is:%s",str);
    printf("\nEnter the index of character you want to delete: ");
    scanf("%d", &n);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(i == n)
        {
            for(int j = n; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            break; // stop after deleting once
        }
    }

    printf("\nUpdated string is: ");
    for(i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
