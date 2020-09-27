#include<stdio.h>
int length(char*s);
int main()
{
    char op[50];
    int r;
    printf("Input From User:\n");
    gets(op);
    r=length(op);
    printf("String length:%d",r);
    return 0;
}
int length(char *s)
{
int x=0,i;

for(i=0;s[i]!='\0';i++)
{
    x++;
 }
return x;
}
