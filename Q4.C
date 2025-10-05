#include <stdio.h>
#define PI 3.14
int main() {
    float radius,area,circumference;
    printf("enter the radius of circle: \n");
    scanf("%f", &radius);
    area=PI*radius*radius;
    circumference=2*PI*radius;
    printf("area of circle is %.2f\n", area);
    printf("circumference of circle is %.2f\n", circumference);
}