#include <stdio.h>
int main()
{
  int rows1, columns1, rows2, columns2, i, j, k, sum = 0;
  int A1[100][100], A2[100][100], mult[100][100];

  printf("Enter the number of rows and columns of the first matrix\n");
  scanf("%d%d", &rows1, &columns1);
  printf("Enter the elements of first matrix\n");

  for (  i= 0 ; i < rows1 ; i++ )
    for ( j = 0 ; j < columns1 ; j++ )
    {
            printf("A1[%d][%d]: ",i+1, j+1);
      scanf("%d", &A1[i][j]);
    }

  printf("Enter the number of rows and columns of second matrix\n");
  scanf("%d%d", &rows2, &columns2);

  if ( columns1 != rows2 )
    printf("Matrices can't be multiplied.\n");
  else
  {
    printf("Enter the elements of second matrix\n");

    for ( i = 0 ; i < rows2 ; i++ )
      for ( j = 0 ; j< columns2 ; j++ ){
        printf("A2[%d][%d]: ",i+1, j+1);
        scanf("%d", &A2[i][j]);
      }

    for ( i= 0 ; i< rows1 ; i++ )
    {
      for ( j= 0 ; j < columns2 ; j++ )
      {
        for ( k = 0 ; k < rows2 ; k++ )
        {
          sum = sum + A1[i][k]*A2[k][j];
        }

        mult[i][j] = sum;
        sum = 0;
      }
    }

    printf("Product of entered matrices:-\n");

    for ( i= 0 ; i< rows1 ; i++ )
    {
      for ( j = 0 ; j < columns2 ; j++ )
        printf("%d\t", mult[i][j]);

      printf("\n");
    }
  }

  return 0;
}
