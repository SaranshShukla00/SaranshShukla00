#include <stdio.h>

int main() {
    char text[100];
    int i = 0;

    printf("Enter a lowercase string: ");
    fgets(text, sizeof(text), stdin); // Read input including spaces

    while (text[i] != '\0') {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - ('a' - 'A'); // Convert to uppercase
        }
        i++;
    }

    printf("Uppercase string: %s\n", text);
    return 0;
}
