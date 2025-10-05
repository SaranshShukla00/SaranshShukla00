#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("enter temperature in celsius: \n");
    scanf("%f", &celsius);
    fahrenheit=celsius*(9.0/5.0)+32;
    printf("the temperature in fahrenheit is %.2f\n", fahrenheit);
}