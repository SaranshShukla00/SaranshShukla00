#include <stdio.h>

int main() {
    FILE *fp;
    int n;

    // Ask how many student records to store
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file in write mode
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    // Input and write student records
    for (int i = 0; i < n; i++) {
        char name[50];
        int roll;
        float marks;

        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", name);   // single word name
        printf("Roll number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);
    printf("\nData successfully written to students.txt\n");

    // Open file in read mode
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("\nReading records from file:\n");
    char name[50];
    int roll;
    float marks;

    // Read and display records
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}