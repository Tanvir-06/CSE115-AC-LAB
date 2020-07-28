#include <stdio.h>

int main()
{
    int m,x,y;
  printf("Enter The Month Number 1 to 12(Example 1 = January,2 = February....):");
  scanf("%d",&m);
  switch(m)
  {
  	 case 1:
  	 case 3:
	 case 5:
	 case 7:
	 case 8:
	 case 10:
	 case 12:
	  	printf("\nNumber Of Days= 31");
	  	break;

	 case 4:
	 case 6:
	 case 9:
	 case 11:
	  	printf("\nNumber Of Days= 30");
		break;
	 case 2:
	  	printf("\nEnter The Year To Check Its Leap Year Or Not\n");
	  	scanf("%d",&y);
	  	x=((y%4==0)&&((y%400==0)||(y%100!=0)));
	  	switch(x)
	  	{

           case 1:
              printf("%d Is A Leap Year.Number of Days= 29.",y);
              break;

           case 0:
              printf("%d Is Not A Leap Year.Number of Days= 28.",y);
              break;
           default:
              printf("Error");

	  	}
    break;
	default:
	    printf("Invalid Number It Is Not Between 1 To 12.\nPlease Enter A Valid Number Between 1 TO 12 Like As 1 = January,2 = February....");
  }
  return 0;
}
