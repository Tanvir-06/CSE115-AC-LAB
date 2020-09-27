#include<stdio.h>
struct Employee
{
    char    name[10000];
    int     age;
    float   salary,bonus;

};
float emp_bonus(float salary, int age)
{
	if (age > 50)
		return salary * 0.4;
	else
		return salary * 0.25;
}
int main ()
{
    struct Employee empl[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter Information For Employee %d\n",i+1);
        printf("Enter Name: ");
        fflush(stdin);
        gets(empl[i].name);
        printf("Enter Age: ");
        scanf("%d",&empl[i].age);
        printf("Enter Salary: ");
        scanf("%f",&empl[i].salary);
        empl[i].bonus = emp_bonus(empl[i].salary, empl[i].age);
  }
  FILE *file;
  file = fopen("EMPLOYEE_DATA.txt", "w");

  if(file==NULL)
  {
      printf("File Does Not Exist.");
  }
  else
  {
  printf("The file opens successfully.\n");
  for( i = 0; i <2 ; i++)
  {
    printf("\nName: %s\n",empl[i].name);
    printf("Age: %d\n",empl[i].age);
    printf("Employee Basic Salary: %f\n",empl[i].salary);
    printf("Employee Total Salary: %f\n",(empl[i].salary + empl[i].bonus ));
    printf("Employee bonus: %f\n",empl[i].bonus);
    fprintf(file, "Name:%s  Age:%d\n", empl[i].name,empl[i].age);
  }
    printf("Writing all the employees name and age on that file.\n");
    printf("File is written successfully\n");
	fclose(file);
	}
    return 0;

}
