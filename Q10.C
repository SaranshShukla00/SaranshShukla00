#include <stdio.h>
int main() {
    int sec,h,m,s;
    printf("enter total no of seconds:\n");
    scanf("%d", &sec);
    h=sec/3600;
    m=(sec%3600)/60;
    s=(sec%3600)%60;
    printf(" time is %d:%d:%d", h,m,s);
}