#include<stdio.h>
int fibonacci(int n);

int main()
{
    int n,r;
    printf("Enter The Value Of Fibonacci Number:");
    scanf("%d", &n);
    r= fibonacci(n);
    printf("Fibonacci %d =%d", n,r);
    printf("\n");
    return 0;
}

int fibonacci(int n)
{
    int a[n-1];
    int i;

    a[0]=0;
    a[1]=1;
    for(i=2;i<=n-1;i++)
    {
     a[i]=a[i-1]+a[i-2];
    }
    return a[n-1];
}
