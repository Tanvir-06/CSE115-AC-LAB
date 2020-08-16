#include<stdio.h>
int main()
{
    int ara[5];
    int i;
    printf("Enter five integer number:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<5;i++)
    {
        if(ara[0]<ara[i])
        {
            ara[0]=ara[i];
        }
    }
    printf("The largest number is %d",ara[0]);
    return 0;
}
