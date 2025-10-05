#include <stdio.h>
int main() {
    int a,b,temp;
    printf("enter the first variable: \n");
    scanf("%d", &a);
    printf("enter the second variable: \n");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping the nos: \n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);
}