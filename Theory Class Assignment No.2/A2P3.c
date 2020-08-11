#include <stdio.h>
#include <math.h>
int main()
{
   int a , x ,s;
   printf("Enter value of 'a':");
   scanf("%d", &a);
   printf("Enter value of 'x':");
   scanf("%d", &x);
   s= pow(a,x);
   printf("a^x :%d\n", s);
   return(0);
}
