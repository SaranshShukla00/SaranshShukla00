#include <stdio.h>
int main() {
    int num;
    printf("enter a num:\n");
    scanf("%d", &num);

    if(num>=0) {
        if(num==0) {
            printf("the num given is zero");
        }
        else{
            printf("the num given is a positive integer");
        }
    }
    else{
        printf("the num given is a negative integer");
    }
}