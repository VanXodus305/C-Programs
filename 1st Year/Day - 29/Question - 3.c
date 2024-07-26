#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Employee
{
  float bp;
  char fname[100], lname[100], cat[100], adr[200];
};
int main()
{
  int n = 0, i = 0;
  char name[20];
  struct Employee *employee = (struct Employee *)malloc(n * sizeof(struct Employee));
  char ch = ' ';
  while (ch != '\0')
  {
    printf("\nEnter A: Enter New Employee Details\nEnter B: Search Employee Details\nEnter C: Increment the Salary\nEnter your choice: ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case 'A':
      employee = (struct Employee *)realloc(employee, (n + 1) * sizeof(struct Employee));
      printf("\nEnter Employee Details:\n");
      printf("First Name: ");
      scanf(" %[^\n]s", employee[n].fname);
      printf("Last Name: ");
      scanf(" %[^\n]s", employee[n].lname);
      printf("Category: ");
      scanf(" %[^\n]s", employee[n].cat);
      printf("Address: ");
      scanf(" %[^\n]s", employee[n].adr);
      printf("Basic Salary: ");
      scanf("%f", &employee[n].bp);
      n++;
      break;
    case 'B':
      printf("Enter first name: ");
      scanf(" %[^\n]s", name);
      for (i = 0; i < n; i++)
      {
        if (strcmp(name, employee[i].fname) == 0)
        {
          printf("\nName: %s %s", employee[i].fname, employee[i].lname);
          printf("\nCategory: %s", employee[i].cat);
          printf("\nAddress: %s", employee[i].adr);
          printf("\nGross Salary: %0.2f\n", (employee[i].bp + (employee[i].bp * 0.5) + (employee[i].bp * 0.1)));
          break;
        }
      }
      if (i == n)
      {
        printf("\nEmployee not found.\n");
      }
      break;
    case 'C':
      printf("Enter first name: ");
      scanf(" %[^\n]s", name);
      float inc;
      printf("Enter the percentage to increase: ");
      scanf("%f", &inc);
      for (i = 0; i < n; i++)
      {
        if (strcmp(name, employee[i].fname) == 0)
        {
          printf("\nName: %s %s", employee[i].fname, employee[i].lname);
          printf("\nCategory: %s", employee[i].cat);
          printf("\nAddress: %s", employee[i].adr);
          float gp = employee[i].bp + (employee[i].bp * 0.5) + (employee[i].bp * 0.1);
          printf("\nGross Salary: %0.2f\n", (gp + ((inc / 100) * gp)));
          break;
        }
      }
      if (i == n)
      {
        printf("\nEmployee not found.\n");
      }
      break;
    default:
      printf("\nInvalid Choice.");
      ch = '\0';
    }
  }
  return 0;
}