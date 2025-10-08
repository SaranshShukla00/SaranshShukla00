#include <stdio.h>

int main() {
    char text[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    // Find the length of the string (excluding newline and null terminator)
    while (text[length] != '\0' && text[length] != '\n') {
        length++;
    }

    // Print characters in reverse order
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }
    printf("\n");

    return 0;
}
