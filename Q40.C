#include <stdio.h>
#include <string.h>

int main() {
    char binary[33], ones_complement[33];
    int i;

    printf("Enter a binary number: ");
    scanf("%32s", binary);

    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            ones_complement[i] = '1';
        else if (binary[i] == '1')
            ones_complement[i] = '0';
        else {
            printf("Invalid binary digit detected.\n");
            return 1;
        }
    }
    ones_complement[i] = '\0';

    printf("1's Complement: %s\n", ones_complement);

    return 0;
}