#include <stdio.h>
int main()
{
   int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int b[10];
   int i,n;

   n= 9;

   for(i= 0;i < 10;i++)
   {
      b[n] = a[i];
      n--;
   }

   printf(" Main Order -> Reverse Order  \n");

   for(i= 0; i< 10; i++)
   {
      printf("     %2d               %2d\n", a[i], b[i]);
   }

   return 0;
}
