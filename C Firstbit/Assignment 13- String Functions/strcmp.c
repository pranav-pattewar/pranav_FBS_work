//strcmp()
#include <stdio.h>
#include <string.h>

void main() 
{
    char str1[] = "abc";
    char str2[] = "abc";
    int res = strcmp(str1, str2);
    printf("Comparison result: %d means equal\n", res);
}
