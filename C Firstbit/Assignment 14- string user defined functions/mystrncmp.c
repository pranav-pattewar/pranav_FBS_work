//mystrncmp()
#include <stdio.h>

int mystrncmp(const char* s1, const char* s2, int n);

void main() {
    char str1[100], str2[100];
    int n;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("Enter number of characters to compare: ");
    scanf("%d", &n);

    int result = mystrncmp(str1, str2, n);
    if(result == 0)
        printf("First %d characters are equal.\n", n);
    else
        printf("First %d characters are not equal.\n", n);
}

int mystrncmp(const char* s1, const char* s2, int n) {
    for(int i = 0; i < n; i++) {
        if(s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
            return s1[i] - s2[i];
    }
    return 0;
}
