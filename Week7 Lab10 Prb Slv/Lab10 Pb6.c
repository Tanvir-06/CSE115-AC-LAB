#include<stdio.h>
#include<String.h>
void Replace(char arr[],char oldChar, char newChar);

int main()
{
char a[30],b,c;
printf("Enter String:\n");
gets(a);
printf("Enter Old Char & New Char :\n");
scanf("%c %c",&b,&c);
Replace(a,b,c);
return 0;
}
void Replace(char arr[],char oldChar, char newChar)
{
  printf("Modified String:");
for(int x=0;arr[x]!='\0';x++)
    {
    if(arr[x]==oldChar)
    {
      arr[x]=newChar;
    }

   printf("%c",arr[x]);
    }


}
