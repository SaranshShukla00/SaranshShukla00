#include <stdio.h>
int main() {
    int num1,num2;
    int sum,diff,multi,div;
    printf("enter first no: \n");
    scanf("%d", &num1);
    printf("enter second no: \n");
    scanf("%d", &num2);
    sum=num1+num2;
    printf("the sum is %d ", sum);
    diff=num1-num2;
    printf("the diff is %d ", diff);
    multi=num1*num2;
    printf("the multi is %d ", multi);
    div=num1/num2;
    printf("the div is %d ", div);
    
}