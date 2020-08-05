#include<stdio.h>
int main()
{
    int a,b,c,t;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    t=b;
    b=a;
    a=c;
    c=t;
    printf("The value Of:\na=%d\nb=%d\nc=%d",a,b,c);
    return 0;
}
