#include <stdio.h>

    int main()
  {
    int i = 0;
   int array[5];
   printf ("inserisci cinque numeri\n");
  while ( i <= 4)
  {
   scanf("%d", &array[i]);
   i = i + 1;
  }
  i = 0;
  while(i <= 4)
  {
    printf("%d\n", array[i]);
    i = i + 1;
  }
  i= 0;
  int temp;
  while( i < 2)
  {
    temp = array[i];
    array[i]= array [4 - i];
    array[4 - i] = temp;
    i = i + 1;
  }
i = 0;
while(i <= 4)
{
  printf("%d\n", array[i]);
  i = i + 1;
}
 }
