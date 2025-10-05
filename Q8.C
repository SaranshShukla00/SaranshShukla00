#include <Stdio.h>
int main() {
    int n,sum=0;
    printf("enter a no:\n");
    scanf("%d", &n);
    sum=n*(n+1)/2;
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);
}