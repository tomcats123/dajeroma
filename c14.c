#include <stdio.h>

    int main()
    {
        int a= 0;
        int b = 0;
        int somma = 0;
        
        while(a >= 0)
        {
            printf("inserisci numeri\n");
            scanf("%d", &a);
            somma = somma + a;
            b = a + 1;
        }
        printf("%d\n", somma / b);
    } 
