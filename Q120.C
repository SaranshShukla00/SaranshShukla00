#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    // Read full line including spaces
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Convert entire string to lowercase first
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    // Capitalize the first non-space character
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            str[i] = toupper(str[i]);
            break;
        }
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
