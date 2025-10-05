#include <stdio.h>
#include <math.h>

int main() {
    int num, original, sum = 0, digits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    // Count digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}