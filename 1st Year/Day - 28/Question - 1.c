#include <stdio.h>
struct Student
{
  int roll;
  char name[100];
  char gender;
  float marks;
};
int main()
{
  struct Student student;
  printf("Enter the student's Name: ");
  scanf("%[^\n]s", student.name);
  printf("Enter the student's Roll Number: ");
  scanf("%d", &student.roll);
  printf("Enter the student's Gender (M/F): ");
  scanf(" %c", &student.gender);
  printf("Enter the student's Marks: ");
  scanf("%f", &student.marks);
  printf("Student Details:");
  printf("\nRoll Number: %d\n", student.roll);
  printf("Name: %s\n", student.name);
  printf("Gender: %c\n", student.gender);
  printf("Marks: %f\n", student.marks);
  return 0;
}