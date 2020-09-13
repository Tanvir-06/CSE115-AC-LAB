#include<stdio.h>
int main()
{
    int A[100];
    int i,num;
    printf("Enter the size of ara:");
    scanf("%d",&num);
    printf("Enter the Elements of Array:");
    for(i=0;i<num;i++){
        scanf("%d",&A[i]);
    }
    int high1=0;
    for(i=0;i<num;i++){
        if(high1<A[i]){
            high1=A[i];
        }
    }
    int high2=0;
    for(i=0;i<num;i++){
        if(high2<A[i]&&A[i]<high1){
            high2=A[i];
        }
    }
    int high3=0;
    for(i=0;i<num;i++){
        if(high3<A[i]&&A[i]<high2){
            high3=A[i];
        }
    }
    printf("Top 3 largest elements of the array is: %d %d %d",high1,high2,high3);
    return 0;
}
