#include<stdio.h>
 int main()
 {
     int n, a[100];
     printf("Enter The Size Of The Array: ");
     scanf("%d", &n);                         //Input Array Size From User.....
     printf("Enter Array Elements: \n");

     for(int i=0; i<n; i++)
     {
       scanf("%d",&a[i]);                    //Input Array Elements From User......
     }
     printf("Even Numbers:");

     for(int i=0; i<n; i++)
     {
       if(a[i]%2==0)                        //Checking Even
       printf("%d ", a[i]);
     }

     printf("\nOdd Numbers:");             //Or

     for(int i=0; i<n; i++)
     {
       if(a[i]%2!=0)
       printf("%d ", a[i]);                //Checking Odd
     }

     return 0;
 }
