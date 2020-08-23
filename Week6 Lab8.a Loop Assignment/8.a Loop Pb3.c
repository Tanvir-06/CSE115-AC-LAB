#include<stdio.h>
int main()
{
    int num,i,j;
    printf("Enter any number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
            if(i%2!=0)
            {
        for(j=1;j<=i;j++)
        {
            if(j%2!=0)
            {
                    printf(" ");
                printf("%d",j);
            }
        }
            }
            if(i%2==0)
            {
                for(j=1;j<=i;j++)
                {
                    if(j%2==0)
                    {
                            printf(" ");
                        printf("%d",j);
                    }
                }
            }
            printf("\n");
    }
    return 0;

}
