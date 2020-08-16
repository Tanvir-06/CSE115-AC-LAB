#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter value of n : ");
    scanf("%d", &n);//user input
    for(i=1; i<n; i++)//how many rows.....loop
    {
        for(j=1; j<=(n-i); j++)
        {
            printf(" ");//space
        }
        for(j=i; j<=n; j++)
        {
            printf("*");//it will print till j=n....
        }

        printf("\n");//newline
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
