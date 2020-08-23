#include<stdio.h>
int main()
{
    int age[15],count,i=1;
    printf("input the age of 15 peoples:");
    while(i<=15){
        i++;
        scanf("%d",&age[i]);
        if(age[i]>40&&age[i]<60){
            count++;
        }
    }
    printf( "The number of persons whose age is between 40 and 60 inclusives.%d",count);
    return 0;
}
