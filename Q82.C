#include <stdio.h>

int main() {
    char text[] = "Hello, world!";
    int i = 0;

    while (text[i] != '\0') {
        printf("%c\n", text[i]);
        i++;
    }

    return 0;
}
