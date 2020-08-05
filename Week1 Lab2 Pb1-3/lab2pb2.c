#include <stdio.h>
#include <math.h>
int main()
{
   int b , hy;
   float H , A ;
   printf("Enter Base:");
   scanf("%d", &b);
   printf("Enter Hypotenuse:");
   scanf("%d", &hy);
   H = sqrt(pow(hy,2)- pow(b,2));
   printf("Height is : %.2f\n" , H);
   A = (H*b)/2;
   printf("Area is: %.2f\n" , A);
return(0);
   }
