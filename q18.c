#include <stdio.h>
int main() {
    int percentage;
    printf("Enter your percentage: ");
    scanf("%d", &percentage);
    if (percentage >= 90 && percentage <= 100)
    {
    printf("Grade: A\n");
    }
    else if (percentage >= 75)
    {
    printf("Grade: B\n");
    }
    else if (percentage >= 60)
    {
    printf("Grade: C\n");
    }
    else if (percentage >= 45)
    {
    printf("Grade: D\n");
    }
    else if (percentage >= 0)
    {
    printf("Grade: F (Fail)\n");
    }
    else
    {
    printf("Invalid input! Percentage should be between 0 and 100.\n");
    }
}