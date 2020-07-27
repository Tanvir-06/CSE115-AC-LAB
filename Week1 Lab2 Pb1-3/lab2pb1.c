#include <stdio.h>
int main()
{
    int n;
    int s,i;
    float avg;
    printf("enter five numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d", &n);
        s= s+n;
    }
    avg=s/(float)5;
    printf("avg= %f", avg);
    return 0;
}
