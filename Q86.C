#include <stdio.h>

int main() {
    char text[100];
    int start = 0, end = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    // Find the length of the string (excluding newline and null terminator)
    while (text[end] != '\0' && text[end] != '\n') {
        end++;
    }
    end--; // Set to last valid character index

    while (start < end) {
        if (text[start] != text[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
