#include <stdio.h>

int countCharacters(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char text[] = "Hello, world!";
    int length = countCharacters(text);
    printf("Character count: %d\n", length);
    return 0;
}
