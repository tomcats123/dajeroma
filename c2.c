#include <stdio.h>

int main()
{
int a;

printf("inserisci eta\n");
scanf("%d", &a);

if(a >= 18)
{
    printf("utente maggiorenne\n");
}
else if(a < 18)
{
    printf("utente minorenne\n");
}
}
