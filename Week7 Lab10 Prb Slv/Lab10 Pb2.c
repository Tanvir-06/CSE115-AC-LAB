#include<stdio.h>
#include<string.h>
void search(char arr[], char key);

int main()
{
    char str[30];
    char x;
    gets(str);
    scanf("%c",&x);

    search(str,x);

    return 0;
}
void search(char arr[], char key)
{
   int n=0;
   for(int i=0;arr[i]!='\0';i++)
   {
    if(arr[i]==key)
    {
       n=1;
       break;
    }
   }
    if(n==1)
        printf("Found");
    else
        printf("Not found");

   }
