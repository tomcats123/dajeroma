#include <stdio.h>

    int main()
    {
      int x = 0;

      while (x <= 20)
      {
        printf("x %d\n", x);
        x = x + 2;
        if(x >= 20)
        {
          printf("finito\n");
        }
        
      }  
    
    }
