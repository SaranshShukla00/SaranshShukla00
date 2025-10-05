#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int numerator = 2 * i - 1;
        int denominator = 2 * i;
        sum += (double)numerator / denominator;
    }

    printf("Sum of the series up to %d terms: %.6lf\n", n, sum);

    return 0;
}