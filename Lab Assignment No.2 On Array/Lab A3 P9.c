#include <stdio.h>
int main()
{
    int a[10][10], trnsp[10][10], c,i,j,r;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("\nEnter matrix elements:\n");      //input rows and colums
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);                        // input elements to the matrix
        }

    printf("\nThe matrix: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }

    for (i = 0; i < r; ++i)            //calculating transpose of matrix a
        for (j = 0; j < c; ++j)
        {
            trnsp[j][i] = a[i][j];
        }

    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j)                      // Showing the transpose of matrix a
        {
            printf("%d  ", trnsp[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    return 0;
}
