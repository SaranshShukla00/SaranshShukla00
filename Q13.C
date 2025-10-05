#include <stdio.h>
int main() {
    int year;
    printf("enter a year:\n");
    scanf("%d", &year);

    if(year%4==0) {
        if(year%100==0) {
            printf("the year is not a leap year");
        }
        else{
            printf("the year is a leap year");
        }
    }
    else if(year%400==0) {
        printf("the year is a leap year");
    }
    else{
        printf("the year is not a leap year");
    }
}