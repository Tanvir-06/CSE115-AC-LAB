#include<stdio.h>
int sum(int n)
{
    int sum=0,i;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter Value Of N:");
    scanf("%d",&num);
    printf("Result: %d",sum(num));
    return 0;
}
