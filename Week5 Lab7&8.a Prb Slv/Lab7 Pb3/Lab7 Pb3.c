#include<stdio.h>
int search(int arr[], int size, int key)
{
    int i,s=0;
    for (i=0;i<size ;i++)
        {
        if (key==arr[i])
        {
            s=1;
        }
    }
    return s;
}

int main()
{
    int a[100];
    int i,n,key;

    printf("Enter Array Size: ");
    scanf("%d",&n);

    printf("Array Elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Search Key: ");
    scanf("%d",&key);

    int s=search(a, n, key);
    if(s==1)
    {
       printf("Found");
    }
    else
    {
      printf("Not Found");
    }
   return 0;
}
