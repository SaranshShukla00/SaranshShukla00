#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char buffer[256];

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try to open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read and display content line by line
    printf("\nContents of %s:\n", filename);
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close file
    fclose(fp);

    return 0;
}
