#include<stdio.h>
void reverse(char arr[])
{
    int n = 0;
    while(arr[n]!='\0')
    {
        n++;
    }

    int x = 0;
    printf("Reverse Order: ");
    while(arr[x]!='\0')
    {
        printf("%c",arr[n-1]);
        n--;
        x++;
    }
}
int main()
{
    char string[50];
    printf("Enter String: ");
    scanf("%s",&string);

    reverse(string);

    return 0;
}
