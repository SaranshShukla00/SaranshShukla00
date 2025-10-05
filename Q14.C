#include <stdio.h>
int main() {
    char ch;
    printf("enter a character:\n");
    scanf("%c", &ch);
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
    ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    printf("'%c' is a vowel.\n", ch);
    } 
    else {
    printf("'%c' is a consonant.\n", ch);
    }
}