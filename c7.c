#include <stdio.h>

    int main()
    {
        int a;
        int b;
        int c;

        printf("inserisci tre numeri\n");
        scanf("%d %d %d", &a, &b, &c);

        if(a + b > c && b + c > a && a + c > b)
        {
            printf("è un triangolo\n");
        }

        else
        {
            printf("non è un triangolo\n");
        }
    }
