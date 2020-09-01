#include<stdio.h>
int computeAverage(int a,int b);
int main()
{
    int a,b,r;
    printf("Enter A:");
    scanf("%d", &a);
    printf("Enter B:");
    scanf("%d", &b);
    r=computeAverage(a,b);
    printf("Average:%d",r);
    return 0;
}
int computeAverage(int a,int b)
{
    int avg;
    avg=(a+b)/2;
    return avg;
}
