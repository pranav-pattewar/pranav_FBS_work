//stpcpy
#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>

void main() 
{
    char src[] = "Hello";
    char dest[20];
    char *end = stpcpy(dest, src);
    printf("Copied: %s, ends at: %p\n", dest, (void*)end);
}
