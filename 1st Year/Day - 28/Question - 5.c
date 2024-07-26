#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Employee
{
  float bp;
  char name[100], dep[100], des[100], gender;
};
int main()
{
  int n;
  printf("Enter the number of employees: ");
  scanf("%d", &n);
  struct Employee *employee = (struct Employee *)malloc(n * sizeof(struct Employee));
  for (int i = 0; i < n; i++)
  {
    printf("\nEnter the details of Employee - %d:\n", i + 1);
    printf("Name: ");
    scanf(" %[^\n]s", (*(employee + i)).name);
    printf("Gender (M/F): ");
    scanf(" %c", &((*(employee + i)).gender));
    printf("Designation: ");
    scanf(" %[^\n]s", (*(employee + i)).des);
    printf("Department: ");
    scanf(" %[^\n]s", (*(employee + i)).dep);
    printf("Basic Pay: ");
    scanf("%f", &((*(employee + i)).bp));
  }
  for (int i = 0; i < n; i++)
  {
    printf("\nEmployee - %d Details:\n", i + 1);
    printf("Name: %s\n", (*(employee + i)).name);
    printf("Gender: %c\n", ((*(employee + i)).gender));
    printf("Designation: %s\n", ((*(employee + i)).des));
    printf("Department: %s\n", ((*(employee + i)).dep));
    printf("Basic Pay: %0.2f\n", ((*(employee + i)).bp));
    printf("Gross Pay: %0.2f\n", ((*(employee + i)).bp) + (0.25 * ((*(employee + i)).bp)) + (0.75 * ((*(employee + i)).bp)));
  }
  return 0;
}