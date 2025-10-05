#include <stdio.h>
#include <math.h>
int main() {
    float principal,rate,time,timesCompound;
    float simpleInt,compoundInt;
    
    printf("enter the principal amt:\n");
    scanf("%f", &principal);
    printf("enter the rate of interest:\n");
    scanf("%f", &rate);
    rate=rate/100;
    printf("enter the no of years:\n");
    scanf("%f", &time);
    printf("enter the no of times compound per year:\n");
    scanf("%f", &timesCompound);

    simpleInt=(principal*rate*time)/100;
    compoundInt=principal+pow(1+rate/timesCompound, timesCompound*time);

    printf("the Simple Interest is %.2f\n", simpleInt);
    printf("the Compound Interest is %.2f\n", compoundInt);
}