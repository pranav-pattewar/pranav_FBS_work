// strstr()
#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "Find the needle in this haystack";
    char *result = strstr(text, "needle");
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");
    return 0;
}

