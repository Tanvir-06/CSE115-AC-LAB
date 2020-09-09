#include<stdio.h>
int main()
{
    int A[100][100];
    int B[100] [100];
    int C[100] [100];
    int i,rows=3,coloumns=4,j,sum=0,n;
    for(i=0;i<rows;i++){
        for(j=0;j<coloumns;j++){
                printf("A [%d] [%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("The second matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<coloumns;j++){
                printf("B [%d] [%d]",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<coloumns;j++){
                C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("Enter the number of coloumn:");
    scanf("%d",&n);
    for (j = 0; j < n; ++j)
        {
            for (i = 0; i < n; ++i)
            {
                sum = sum + C[i][j];
            }
        }
        printf("Summation of %d coloumn is:%d",n,sum);

    return 0;

}
