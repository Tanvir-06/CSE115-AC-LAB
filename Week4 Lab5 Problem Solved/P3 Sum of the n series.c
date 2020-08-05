#include<stdio.h>
int main()
{
	int n,i;
	int s=0;
	printf("Enter N Value: ");
	scanf("%d",&n);
	s= (n * (n + 1)) / 2;
	printf("Sum of the series: ");
	for (i =1;i <= n;i++)
	{
      if (i!=n)
      printf("%d + ",i);
      else
      printf("%d = %d ",i,s);
	}
	return 0;
}
