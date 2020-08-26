#include <stdio.h>
double harmonicSum(int n)
{
 double i, s = 0.0;
  for (i = 1; i <= n; i++)
  s = s + 1.0/i;
  return s;
}

int main()
{
    int n;
    printf("Input N :");
    scanf("%d",&n);
    printf("Sum is %lf", harmonicSum(n));
    return 0;
}
