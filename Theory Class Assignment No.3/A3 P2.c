#include<stdio.h>
void listNumbersAsc(int start,int end)
{
    int i;
    if(start<end)
    {
        for(i=start;i<=end;i++)
        {
            printf("%d  ",i);
        }
    }
    else
    {
        for(i=end;i<=start;i++)
        {
            printf("%d  ",i);
        }
    }
}

int main()
{
    int n1,n2;
    printf("Input the start number:");
    scanf("%d",&n1);
    printf("Input the end number:");
    scanf("%d",&n2);
    listNumbersAsc(n1,n2);
    return 0;
}
