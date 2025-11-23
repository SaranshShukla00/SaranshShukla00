#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int spaces = 0, digits = 0, specials = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input including spaces
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
        spaces++;
        else if (isdigit(str[i]))
        digits++;
        else if (!isalnum(str[i]) && str[i] != '\n')
        specials++;
    }
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n")