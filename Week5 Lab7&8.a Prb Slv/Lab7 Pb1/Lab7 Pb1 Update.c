#include <stdio.h>

int main()
{
    int arr[5];
    printf("Enter 5 integers as input:\n");
    for(int i=0; i<5; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=4; i>=0; --i)
    {
        printf("\n%d\n", arr[i]);
    }
    return 0;
}
