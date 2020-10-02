#include<stdio.h>
#include<String.h>
void count(char arr[]);

int main()
{
    char str[30];
    gets(str);
    count(str);
    return 0;
}
void count(char arr[])
{
int vow=0,con=0;
for(int i=0;arr[i]!='\0';i++)
    {
    if((arr[i]=='A'||arr[i]=='a')|| (arr[i]=='E'||arr[i]=='e')
       || (arr[i]=='I'||arr[i]=='i') || (arr[i]=='O'||arr[i]=='o')
       || (arr[i]=='U'||arr[i]=='u'))
       {
        vow++;
       }
    else{
        con++;
    }
 }
 printf("Vowels:%d\n",vow);
 printf("Consonants:%d\n",con);
}
