//mystrncat()
#include <stdio.h>

char* mystrncat(char* dest, const char* src, int n);

void main() {
    char str1[100], str2[100];
    int n;
    printf("Enter destination string: ");
    scanf("%s", str1);
    printf("Enter source string: ");
    scanf("%s", str2);
    printf("Enter number of characters to concatenate: ");
    scanf("%d", &n);

    mystrncat(str1, str2, n);
    printf("After concatenation: %s\n", str1);
}

char* mystrncat(char* dest, const char* src, int n) {
    int i = 0, j = 0;
    while(dest[i] != '\0') i++;
    while(j < n && src[j] != '\0') {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
    return dest;
}
#include <stdio.h>

char* mystrncat(char* dest, const char* src, int n);

void main() {
    char str1[100], str2[100];
    int n;
    printf("Enter destination string: ");
    scanf("%s", str1);
    printf("Enter source string: ");
    scanf("%s", str2);
    printf("Enter number of characters to concatenate: ");
    scanf("%d", &n);

    mystrncat(str1, str2, n);
    printf("After concatenation: %s\n", str1);
}

char* mystrncat(char* dest, const char* src, int n) {
    int i = 0, j = 0;
    while(dest[i] != '\0') i++;
    while(j < n && src[j] != '\0') {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
    return dest;
}
