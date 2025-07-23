//mystrstr()
#include <stdio.h>

char* mystrstr(char* str, char* substr);
void main()
{
    char str[100];
    char substr[100];

    printf("Enter main string: ");
    scanf("%s", str);

    printf("Enter sub string to find in main string: ");
    scanf("%s", substr);

    char* result = mystrstr(str, substr); // Call the function

    if(result)
        printf("Substring found at position: %ld\n", result - str);
    else
        printf("Substring not found.\n");

}

// Function to find substring
char* mystrstr(char* str, char* substr)
{
    if (*substr == '\0') // empty substring
        return str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        int j = 0;
        while (substr[j] != '\0' && str[i + j] == substr[j])
        {
            j++;
        }
        if (substr[j] == '\0') // found full match
            return &str[i];
    }

    return NULL; // not found
}
