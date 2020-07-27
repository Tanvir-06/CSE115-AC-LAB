#include <stdio.h>
int main()
{
   int rad;
   float area, perimeter;
   printf("Enter the radius: ");
   scanf("%d", &rad);
    area = 3.14*rad*rad;
	printf(" Area of the circle = %.2f\n ", area);
    perimeter = 2*3.14*rad;
   printf("Perimeter of the circle = %.2f", perimeter);
return(0);
}
