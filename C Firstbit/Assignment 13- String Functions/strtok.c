//strtok()
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This,is,a,test";
    char *token = strtok(str, ",");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }
    return 0;
}
