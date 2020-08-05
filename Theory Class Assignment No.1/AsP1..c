#include<stdio.h>
#include<math.h>
int main()
{
 int x;
 double r;
 printf("Enter The Value Of X:");
 scanf("%d",&x);
 r=sqrt(pow(x,3)+pow(x,2)-12*x-12);
 printf("Result=%.2lf",r);
 return 0;
}
