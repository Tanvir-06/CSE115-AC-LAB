#include<stdio.h>
void printStarPyramid(int lines)
{
    int i, j;
    for(i=1;i<=lines;i++)
    {
       for(j=1;j<=(lines-i);j++)
       {
          printf(" ");
       }
       for(j=1;j<=(2*i-1);j++)
       {
          printf("*");
       }
       printf("\n");
    }
}
int main()
{
    int n;

    printf("Enter number of lines:");
    scanf("%d", &n);

    printf("\n");

    printStarPyramid(n);

    printf("\n");

    return 0;
}
