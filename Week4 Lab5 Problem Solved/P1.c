#include <stdio.h>

int main()
{
    int i;
    printf("Even numbers between 0 to 100:");
    for(i= 1; i<= 100; i++)
    {
        if(i%2== 0)
        {
         printf("\n%d",i);
        }
    }
    return 0;
}
