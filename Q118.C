#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (between 0 and %d, one missing): ", n, n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Expected sum of numbers from 0 to n
    int expectedSum = n * (n + 1) / 2;

    int missing = expectedSum - sum;
    printf("Missing number is: %d\n", missing);

    return 0;
}
