//mystrncasecmp()
#include <stdio.h>

int mystrncasecmp(const char* s1, const char* s2, int n);

void main() {
    char str1[100], str2[100];
    int n;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("Enter number of characters to compare: ");
    scanf("%d", &n);

    int result = mystrncasecmp(str1, str2, n);
    if(result == 0)
        printf("First %d characters are equal (case-insensitive).\n", n);
    else
        printf("First %d characters are not equal.\n", n);
}

int mystrncasecmp(const char* s1, const char* s2, int n) {
    for(int i = 0; i < n; i++) {
        char c1 = (s1[i] >= 'A' && s1[i] <= 'Z') ? s1[i] + 32 : s1[i];
        char c2 = (s2[i] >= 'A' && s2[i] <= 'Z') ? s2[i] + 32 : s2[i];
        if(c1 != c2 || c1 == '\0' || c2 == '\0')
            return c1 - c2;
    }
    return 0;
}
