#include<stdio.h>
int main()
{
    int ara[100];
    int siz,key,i,count=0;
    printf("Enter Array size:");
    scanf("%d",&siz);
    printf("Array elements:\n");
    for(i=1;i<=siz;i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("Search Key:");
    scanf("%d",&key);
    for(i=1;i<=siz;i++)
    {
        if(ara[i]==key)
        {
            count++;
        }
    }
    printf("Key appears %d times",count);
    return 0;
}
