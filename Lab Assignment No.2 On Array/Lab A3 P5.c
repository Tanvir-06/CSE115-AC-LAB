#include <stdio.h>

int main()
{
int n,x,j;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
int a[n],i;
   for(i = 0 ; i<n; i++)
   {
       printf("Enter the element at a[%d] ",i);
       scanf("%d",&a[i]);
   }
   printf("Enter the index where you want to change : ");
   scanf("%d",&x);
   x = x;

   printf("Enter the new element : ");
   scanf("%d",&j);

   for(i = 0 ; i<n; i++)
   {
       a[x] = j;
       printf("%d ",a[i]);
   }
    return 0;
}
