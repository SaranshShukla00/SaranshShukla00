#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[100];
    char newline[256];

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Clear input buffer before using fgets
    getchar();

    // Take new line of text from user
    printf("Enter a new line of text: ");
    fgets(newline, sizeof(newline), stdin);

    // Remove newline character if present
    newline[strcspn(newline, "\n")] = '\0';

    // Append text to file
    fprintf(fp, "%s\n", newline);

    // Close file
    fclose(fp);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}
