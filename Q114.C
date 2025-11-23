#include <stdio.h>
#include <string.h>

int longestUniqueSubstring(char *s) {
    int n = strlen(s);
    int lastIndex[256]; // stores last index of each character (ASCII)
    
    // Initialize all indices as -1
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int maxLen = 0;   // result
    int start = 0;    // start index of current window

    for (int i = 0; i < n; i++) {
        // If character is already seen, move start to right of its last occurrence
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }

        // Update last index of current character
        lastIndex[(unsigned char)s[i]] = i;

        // Update max length
        int windowLen = i - start + 1;
        if (windowLen > maxLen) {
            maxLen = windowLen;
        }
    }

    return maxLen;
}

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    return 0;
}