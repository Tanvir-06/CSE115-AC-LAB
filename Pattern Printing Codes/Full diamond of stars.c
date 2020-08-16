#include <stdio.h>

int main()
{
    int i, j, rows;
    int stars, spaces;

    printf("Enter rows to print : ");
    scanf("%d", &rows);// user input of rows


    stars = 1;
    spaces = rows - 1;
    for(i=1; i<rows*2; i++)
    {
        for(j=1; j<=spaces; j++)//loop for space
            printf(" ");
        for(j=1; j<stars*2; j++)//loop for star
            printf("*");
        printf("\n");//newline

        if(i<rows)
        {
            spaces--;        //shape making
            stars++;
        }
        else
        {
            spaces++;        //shape making
            stars--;
        }
    }

    return 0;
}
