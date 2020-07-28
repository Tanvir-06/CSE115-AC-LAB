#include<stdio.h>
 int main()
 {
     int y,x;

     printf("Enter Year:");
     scanf("%d",&y);

     x=((y%4==0)&&((y%400==0)||(y%100!=0)));

     switch(x)
     {

        case 1:
            printf("%d Is A Leap Year.",y);
            break;

        case 0:
            printf("%d Is Not A Leap Year.",y);
            break;

        default:
            printf("Invalid.");
            break;

     }

     return 0;
 }
