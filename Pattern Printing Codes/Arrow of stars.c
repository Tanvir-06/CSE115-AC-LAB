#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter value of n : ");
    scanf("%d", &n);//user input
    for(i=1; i<n; i++)
    {                              //create space of i value....
        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");   //create space of i value.....
        }
        for(j=i; j<=n; j++)
        {
            printf("*");// it will print star till j=n.....
        }

        printf("\n");//newline
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(2*n - 2*i); j++)
        {
            printf(" ");//print star the value of  n,i .....
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");//newline ....
    }

    return 0;
}
