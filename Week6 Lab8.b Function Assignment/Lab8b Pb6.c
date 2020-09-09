#include<stdio.h>
int sumSeries1(int a)
{
    int n=1,s=0,i;
    int x[a];
    for(i=0;i<a;i++)
    {
      x[i]=a-i;
    }
    for(i=0;i<a;i++)
    {
      s=x[i]*x[i]*n+s;
      n=-1*n;
    }

    return s;
}
int main()
{
    int n, S;
    printf("Enter The Value Of A:");
    scanf("%d", &n);

    S=sumSeries1(n);

    printf("SUM:%d\n\n",S);

    return 0;
}
