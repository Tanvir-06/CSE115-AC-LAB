#include<stdio.h>
double getArea(int a, int b, int h);

int main()
{
    int a,b,h;
    double Area;

    printf("Enter Value Of A:");
    scanf("%d", &a);
    printf("Enter Value Of B:");
    scanf("%d", &b);
    printf("Enter Value Of H:");
    scanf("%d", &h);
    Area=getArea(a,b,h);
    printf("Area Of Trapezoid:%.2lf",Area);

  return 0;
}

double getArea(int a, int b, int h)
{
    double x;

    x=(1.0/2.0)*(a+b)*h;

    return x;
}
