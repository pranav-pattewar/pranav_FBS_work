// ques 1- Remove duplicate character from string 
#include<stdio.h>
#include<string.h>
void removeDuplicate(char*);
void main()
{
	char str[11];
	printf("Enter 10 characters in string: ");
	gets(str);
	printf("Original string is : %s",str);
	removeDuplicate(str); //call
	printf("\nString after removing duplicates: %s",str);
} //main ends here 

void removeDuplicate(char *str) 
{
    int i, j, k;
    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[j] == str[i]) {
                
                for (k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
                j--; 
            }
        }
    }
}

