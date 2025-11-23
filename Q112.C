#include <stdio.h>

int kadane(int arr[], int n) {
    int max_so_far = arr[0];
    int current_max = arr[0];

    for (int i = 1; i < n; i++) {
        // Either extend the current subarray or start a new one
        if (current_max + arr[i] > arr[i]) {
            current_max = current_max + arr[i];
        } else {
            current_max = arr[i];
        }

        // Update max_so_far if needed
        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
    }

    return max_so_far;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = kadane(arr, n);
    printf("Maximum sum of any contiguous subarray is: %d\n", result);

    return 0;
}

