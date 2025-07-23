//strerror()
#include <stdio.h>
#include <string.h>

int main() {
    int err = 2;  // ENOENT
    printf("Error %d: %s\n", err, strerror(err));
    return 0;
}
