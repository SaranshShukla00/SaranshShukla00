#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    double average;

    // Open file in read mode
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file numbers.txt\n");
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        average = (double)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("No integers found in file.\n");
    }

    return 0;
}
