#include <stdio.h>

int main() {
    long long num;
    int digit, freq[10] = {0}, max_freq = 0, max_digit = 0, i;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num == 0) {
        printf("Digit 0 occurs most times (1 time).\n");
        return 0;
    }

    // Count frequency of each digit
    long long temp = num > 0 ? num : -num; // Handle negative numbers
    while (temp != 0) {
        digit = temp % 10;
        freq[digit]++;
        temp /= 10;
    }

    // Find digit with maximum frequency
    for (i = 0; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_digit = i;
        }
    }

    printf("Digit %d occurs the most times (%d times).\n", max_digit, max_freq);

    return 0;
}