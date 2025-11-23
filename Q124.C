#include <stdio.h>

int main() {
    char source[100], destination[100];
    FILE *src, *dest;
    int ch;

    // Take filenames from user
    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", destination);

    // Open source file in read mode
    src = fopen(source, "r");
    if (src == NULL) {
        printf("Error: Could not open source file %s\n", source);
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destination, "w");
    if (dest == NULL) {
        printf("Error: Could not open destination file %s\n", destination);
        fclose(src);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close both files
    fclose(src);
    fclose(dest);

    printf("File copied successfully from %s to %s\n", source, destination);

    return 0;
}
