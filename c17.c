#include <stdio.h>

    int main()
  {

int i = 0;
int x =  0;
int array[5];

while (i <= 4) 
{
    array[i] = x;
     i = i +1;
     x = x + 2;

}
i = 0;
 while(i <= 4)
 {
    printf("%d\n", array[i]);
    i = i + 1;
 }
}
   
