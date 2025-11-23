#include <stdio.h>
#include <stdlib.h>

// Function to print first negative integer in every window of size k
void printFirstNegativeInSubarrays(int arr[], int n, int k) {
    int front = 0, rear = -1;
    int queue[n]; // store indices of negative numbers

    // Process first k elements
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            queue[++rear] = i;
        }
    }

    // Process rest of the elements
    for (int i = k; i < n; i++) {
        // Print first negative for previous window
        if (front <= rear) {
            printf("%d ", arr[queue[front]]);
        } else {
            printf("0 ");
        }

        // Remove elements out of this window
        while (front <= rear && queue[front] <= i - k) {
            front++;
        }

        // Add current element if it is negative
        if (arr[i] < 0) {
            queue[++rear] = i;
        }
    }

    // Print for the last window
    if (front <= rear) {
        printf("%d\n", arr[queue[front]]);
    } else
 {
        printf("0\n");
