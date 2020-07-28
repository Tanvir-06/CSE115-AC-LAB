#include<stdio.h>
int main()
{
    char operator;
    double n1,n2,sum,sub,mul,div;
    printf("Enter an Operator:");
    scanf("%c",&operator);
    printf("Enter 1st Operand:");
    scanf("%lf",&n1);
    printf("Enter 2nd Operand:");
    scanf("%lf",&n2);
    switch(operator)
{
      case'+':
          sum=n1+n2;
          printf("The Result Is: %lf",sum);
          break;
      case'-':
          sub=n1-n2;
          printf("The Result Is: %lf",sub);
          break;
      case'*':
          mul=n1*n2;
          printf("The Result Is: %lf",mul);
          break;
      case'/':
           if(n2!=0)
    {
            div=n1/n2;
            printf("The Result Is: %.2lf",div);
    }
       else
    {
        printf("The Math Is Error.(Can't Divide By Zero/0)");
    }
      break;
     default:
     printf("Your Input Is Wrong.");

    }
    return 0;
}
