#include <stdio.h>

int main()
{
    char x = 'a';
    char y = 'b';

    printf("x era: %c\n", x);
    printf("y era: %c\n", y);
    printf("inserisci due caratteri \n");
    scanf("%c %c", &x, &y);
    printf("x è diventato: %c\n", x);
    printf("y è diventato: %c\n", y);
}