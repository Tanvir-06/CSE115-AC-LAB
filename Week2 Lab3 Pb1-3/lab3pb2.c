#include<stdio.h>
int main()
{
  int A;
  printf("Enter an integer:");
  scanf("%d",&A);

  if(A%7==0)
  {
    printf("%d is multiplied of 7",A);
  }
  else
  {
    printf("%d is not multiplied of 7",A);
  }
return 0;
}
