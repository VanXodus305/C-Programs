// Write a program to create a structure to store the information of n number of Employees. Employee’s information includes data members: Emp-id, Name, Designation, basic_salary, hra%, da%. Display the information of employees with gross salary. Use array of structure.

#include <stdio.h>
#include <stdlib.h>

void main()
{
  struct Employee
  {
    int emp_id;
    char name[100];
    char designation[100];
    float basic_salary;
    float hra;
    float da;
  };

  int n;
  printf("Enter the number of employees: ");
  scanf("%d", &n);
  struct Employee *employees = (struct Employee *)malloc(sizeof(struct Employee) * n);
  for (int i = 0; i < n; i++)
  {
    printf("Enter employee %d information:\n", i + 1);
    scanf("%d", &employees[i].emp_id);
    scanf("%s", employees[i].name);
    scanf("%s", employees[i].designation);
    scanf("%f", &employees[i].basic_salary);
    scanf("%f", &employees[i].hra);
    scanf("%f", &employees[i].da);
  }
  printf("Employee Information:\n");
  for (int i = 0; i < n; i++)
  {
    printf("Name: %s\n", employees[i].name);
    printf("Designation: %s\n", employees[i].designation);
    printf("Basic Salary: %f\n", employees[i].basic_salary);
    printf("HRA %: %0.2f\n", employees[i].hra);
    printf("DA %: %0.2f\n", employees[i].da);
    printf("Gross Salary: %0.2f\n", employees[i].basic_salary + (employees[i].hra / 100) * employees[i].basic_salary + (employees[i].da / 100) * employees[i].basic_salary);
    printf("\n");
  }
}
