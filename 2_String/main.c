#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main(int argc, char *argv[]) {
    char input[1024];
    strcpy(input, "hello world");
    printf("%s\n", input);
    printf("%ld\n", strlen(input));
    return 0;
}