#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    // Find number of digits
    digits = (int)log10(num);

    first = num / (int)pow(10, digits);

    // If number has only one digit
    if (digits == 0) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    // Remove first and last digit
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    // Construct swapped number
    swapped_num = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Swapped number: %d\n", swapped_num);

    return 0;
}