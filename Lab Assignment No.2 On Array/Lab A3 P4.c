#include <stdio.h>
int main()
{
    int ar1[100], ar2[100], mgAr[200];
    int x1, x2,mrgs ;
    int n1, n2, mrgN;
    int i;
    printf("Enter the size of first array : ");
    scanf("%d", &x1);
    printf("Enter elements in first array : ");
    for(i=0; i<x1; i++)
    {
        scanf("%d", &ar1[i]);
    }
    printf("\nEnter the size of second array : ");
    scanf("%d", &x2);
    printf("Enter elements in second array : ");
    for(i=0; i<x2; i++)
    {
        scanf("%d", &ar2[i]);
    }

    mrgs = x1 + x2;
    n1 = 0;
    n2 = 0;

    for(mrgN=0; mrgN < mrgs; mrgN++)
    {
        if(n1 >= x1 || n2 >= x2)
        {
            break;
        }

    if(ar1[n1] < ar2[n2])
        {
            mgAr[mrgN] = ar1[n1];
            n1++;
        }
    else
        {
            mgAr[mrgN] = ar2[n2];
            n2++;
        }
    }
    while(n1 < x1)
    {
        mgAr[mrgN] = ar1[n1];
        mrgN++;
        n1++;
    }
    while(n2 < x2)
    {
        mgAr[mrgN] = ar2[n2];
        mrgN++;
        n2++;
    }
    printf("\nArray merged in ascending order : ");
    for(i=0; i<mrgs; i++)
    {
        printf("%d\t", mgAr[i]);
    }

    return 0;
}
