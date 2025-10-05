#include <stdio.h>
int main() {
    int num;
    printf("enter a num:\n");
    scanf("%d", &num);
    if(num%2==0) {
        printf("the given num is even");
    }
    else{
        printf("the given num is odd");
    }
}