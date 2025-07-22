//strncmp()
#include <stdio.h>
#include <string.h>

void main() 
{
    char str1[] = "abcdef";
    char str2[] = "abcxyz";
    int res = strncmp(str1, str2, 3);
    printf("Result: %d\n", res);
}
