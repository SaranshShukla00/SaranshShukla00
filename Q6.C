#include <stdio.h>
int main() {
    int a,b,temp;
    printf("enter the first variable: \n");
    scanf("%d", &a);
    printf("enter the second variable: \n");
    scanf("%d", &b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping the nos: \n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);
}