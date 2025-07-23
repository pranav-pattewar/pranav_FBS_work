//mystrnstr()
#include <stdio.h>

char* mystrnstr(const char* haystack, const char* needle, int n);

void main() {
    char str[100], substr[100];
    int n;
    printf("Enter main string: ");
    scanf("%s", str);
    printf("Enter substring to find: ");
    scanf("%s", substr);
    printf("Enter max number of characters to search: ");
    scanf("%d", &n);

    char* result = mystrnstr(str, substr, n);
    if(result)
        printf("Substring found at index: %ld\n", result - str);
    else
        printf("Substring not found.\n");
}

char* mystrnstr(const char* haystack, const char* needle, int n) {
    int i, j;
    for(i = 0; haystack[i] != '\0' && i <= n; i++) {
        for(j = 0; needle[j] != '\0' && i + j < n && haystack[i + j] == needle[j]; j++);
        if(needle[j] == '\0')
            return (char*)&haystack[i];
    }
    return NULL;
}
