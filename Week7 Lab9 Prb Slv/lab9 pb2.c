#include<stdio.h>
int max(int *p, int size);

int main()
{
    int n;
    int *data;

    printf("Enter the size of the dynamic memory:");
    scanf("%d",&n);

    data=(int*)calloc(n,sizeof(int));

    if(data==NULL){
        printf("Error");
        return 0;
    }
    for(int i=0;i<n;i++){
        printf("Enter for the position:%d ",i+1);
        scanf("%d", data+i);
    }
    int y=max(data, n);

    printf("%d",y);

    return 0;
}
int max(int *p, int size)
{

    for(int i=1;i<=size;i++)
    {
        if(*p<*(p+i))
    {
          *p=*(p+i);
    }
}
    return *p;
}
