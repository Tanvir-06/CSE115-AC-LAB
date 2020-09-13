#include<stdio.h>
int main()
{
    int A[100],size,i,j;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the elements of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Index of duplicate numbers:\n");
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(A[i]==A[j]){
                printf("%d\n",i);
                printf("%d\n",j);
            }
        }
    }
    printf("Duplicate numbers:\n");
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(A[i]==A[j]){
                printf("%d\n",A[j]);
            }
        }
    }
    return 0;
}
