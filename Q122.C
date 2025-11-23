#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[256];  // buffer to hold each line

    // Open file in read mode
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file info.txt\n");
        return 1;
    }

    // Read and print each line until EOF
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(fp);

    return 0;
}
