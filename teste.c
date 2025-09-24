#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "teste";
    char string2[10];

    strcpy(string2, string);
    printf("%s", string2);
    return 0;
}