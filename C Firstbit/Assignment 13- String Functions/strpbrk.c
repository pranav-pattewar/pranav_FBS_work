//strpbrk()
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcdef";
    char str2[] = "xyze";
    char *res = strpbrk(str1, str2);
    if (res)
        printf("First match: %c\n", *res);
    else
        printf("No match found\n");
    return 0;
}
