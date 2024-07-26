#include <stdio.h>
struct Student
{
  int roll;
  char name[100];
  char gender;
  float marks[5];
};
int main()
{
  int n, m, v = 0;
  printf("Enter the number of students: ");
  scanf("%d", &n);
  struct Student student[n];
  for (int i = 0; i < n; i++)
  {
    printf("\nEnter the details of Student - %d:\n", i + 1);
    printf("Name: ");
    scanf(" %[^\n]s", student[i].name);
    printf("Roll Number: ");
    scanf("%d", &student[i].roll);
    printf("Gender (M/F): ");
    scanf(" %c", &student[i].gender);
    for (int j = 0; j < 5; j++)
    {
      printf("Marks in Subject - %d: ", j + 1);
      scanf("%f", &student[i].marks[j]);
    }
  }
  printf("\nEnter subject number whose fail list to be displayed: ");
  scanf("%d", &m);
  for (int i = 0; i < n; i++)
  {
    int tot = 0;
    printf("\nStudent - %d Details:\n", i + 1);
    printf("Name: %s\n", student[i].name);
    printf("Roll Number: %d\n", student[i].roll);
    printf("Gender: %c\n", student[i].gender);
    for (int j = 0; j < 5; j++)
    {
      printf("Marks in Subject - %d: %0.2f\n", j + 1, student[i].marks[j]);
      tot += student[i].marks[j];
      if ((j + 1) == m && student[i].marks[j] < 40)
      {
        v++;
      }
    }
    printf("Total Marks: %d\n", tot);
  }
  printf("\nList of fail students: %d", v);
  return 0;
}