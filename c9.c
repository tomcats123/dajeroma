#include <stdio.h>

    int main()
    {
        int a = 1969;
        int b;
        printf("inserisci una data\n");
        scanf("%d", &b);
        if(a == b)
        {
            printf("sei nato lo stesso anno dell atterraggio sulla luna\n");
            
         }
         else if(a < b)
         {
            printf("sei nato %d anni dopo l atterraggio sulla luna\n", b - a);
         }
         else
         {
            printf("sei nato %d anni prima l atterraggio sulla luna\n", a - b);
         }
    }
