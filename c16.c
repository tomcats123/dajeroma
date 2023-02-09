#include <stdio.h>

    int main()
    {
       float base;
       float esponente;
       float potenza= 1;
       printf("scrivi due numeri\n");
       scanf("%f %f", &base, &esponente);
       
       if (esponente > 0)
       {
       while(esponente > 0)
       {
        potenza = potenza * base;
        esponente = esponente - 1;
       }
       
       printf("%f\n", potenza);
       }
       else if(esponente < 0)
       {
        base = 1 / base;
        while(esponente < 0)
        {
            potenza =  potenza * base;
            esponente = esponente + 1;
        }
        printf("%f\n", potenza);
       }
       else
       {
        printf("1\n");
       }
       } 
