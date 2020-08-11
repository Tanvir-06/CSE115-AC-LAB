#include<stdio.h>
int main()
{
    int i,n,x;
    double sum=0,p=1,y=1;
    printf("Enter the value of 'x':");
    scanf("%d",&x);
    printf("Enter the value of 'n':");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=p*x;
        y*=i;
        sum=sum+(p/y);
    }
    printf("Sum of this series is: %.2lf", sum+1);
    return 0;
}
