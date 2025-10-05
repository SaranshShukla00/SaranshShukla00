#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of positions to rotate right): ");
    scanf("%d", &k);

    k = k % n; // Handle k > n
    if (k == 0) {
        printf("Rotated array:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
    }

    // Rotate using temporary array
    int temp[k];
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for (i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Rotated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}