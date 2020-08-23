#include<stdio.h>
int main()
{
    int num,i,s=0,S=0,sum,x,y,z,v;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=0;i<num;i++){
            if(i%2!=0){
            x=(num-i)*(num-i);
            s=s+x;
            }
            if(i%2==0){
                y=(num-i)*(num-i);
                S=(S+y);
            }
        }
        sum=S-s;
    printf("Summation of this series is: %d",sum);
    return 0;
}
