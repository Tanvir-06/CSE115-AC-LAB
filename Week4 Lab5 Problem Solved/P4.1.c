#include<stdio.h>
int main()
{
  int i,j,n;
  printf("The number of lines in the pattern is user-input:");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  {
    for(j=0;j<i;++j)
    {
     printf("*");
    }
   printf("\n");
 }
}
