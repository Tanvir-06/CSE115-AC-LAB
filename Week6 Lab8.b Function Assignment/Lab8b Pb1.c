#include<stdio.h>
#include<math.h>
void findArea(int radius);
void findVolume(int radius);
double p=3.1416;
int main()
{
    int radi;
    printf("Enter the radius:");
    scanf("%d",&radi);
    findArea(radi);
    findVolume(radi);
    return 0;
}
void findArea(int radius)
{
    double A;

    A=4*p*pow(radius,2);

    printf("Area of the sphere:%.2lf\n", A);
}

void findVolume(int radius)
{
    double V;

    V=(4.0/3.0)*p*pow(radius,3);

    printf("Volume of the sphere:%.2lf\n", V);
}
