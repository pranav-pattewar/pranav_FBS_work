//mystrrchr()
#include <stdio.h>

char* mystrrchr(const char* str, char ch);

void main() {
    char str[100], ch;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter character to find last occurrence: ");
    fflush(stdin);
    scanf(" %c", &ch);

    char* pos = mystrrchr(str, ch);
    if(pos)
        printf("Last occurrence at index: %ld\n", pos - str);
    else
        printf("Character not found.\n");
}

char* mystrrchr(const char* str, char ch) {
    char* last = NULL;
    while(*str) {
        if(*str == ch) last = (char*)str;
        str++;
    }
    return last;
}
