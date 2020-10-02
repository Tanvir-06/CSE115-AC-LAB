#include <stdio.h>
#include <String.h>
int length(char arr[]);

int main()
{
    char str1[30];
    gets(str1);
    int s = length(str1);
    printf("Result will:%d", s);
    return 0;
}
int length(char arr[])
{

    int x = 0, count = 0;
    while (arr[x] != '\0')
    {
        count++;
        x++;
    }
    return count;
}
