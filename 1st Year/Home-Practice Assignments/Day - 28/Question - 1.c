#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Date
{
  int d, m, y;
} Date;
char *month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
void displayMonth(Date d)
{
  printf("\nMonth: %s", month[d.m - 1]);
}
void displayDate(Date d)
{
  if (d.y % 4 == 0 || (d.y % 100 == 0 && d.y % 400 == 0))
  {
    days[1] = 29;
  }
  d.y = d.y % 100;
  if (d.m > 12 || d.d > days[d.m - 1])
  {
    printf("Invalid Date.");
    exit(0);
  }
  printf("\nDate: %d.%d.%02d", d.d, d.m, d.y);
}
void nextDay(Date d)
{
  int m = days[d.m - 1];
  d.m += (d.d + 1) > m ? (d.d + 1) / m : 0;
  d.d = (d.d + 1) > m ? (d.d + 1) % m : d.d + 1;
  d.y += (d.m) > 12 ? ((d.m) / 12) : 0;
  d.m = (d.m) > 12 ? (d.m) % 12 : d.m;
  printf("\nNext Day: %02d.%02d.%d", d.d, d.m, d.y);
}
void nextMonth(Date d)
{
  d.y += (d.m + 1) > 12 ? ((d.m + 1) / 12) : 0;
  d.m = (d.m + 1) > 12 ? (d.m + 1) % 12 : d.m + 1;
  if (d.d > days[d.m - 1])
  {
    printf("\nNext Month: Does not exist.");
  }
  else
  {
    printf("\nNext Month: %02d.%02d.%d", d.d, d.m, d.y);
  }
}
void nextYear(Date d)
{
  if (d.d == 29 && ((d.y + 1) % 4 != 0 || ((d.y + 1) % 100 == 0 && (d.y + 1) % 400 != 0)))
  {
    printf("\nNext Year: Does not exist.");
  }
  else
  {
    printf("\nNext Year: %02d.%02d.%d", d.d, d.m, d.y + 1);
  }
}
void addDay(Date d, int day)
{
  int m = days[d.m - 1];
  d.m += (d.d + day) > m ? (d.d + day) / m : 0;
  d.d = (d.d + day) > m ? (d.d + day) % m : d.d + 1;
  d.y += (d.m) > 12 ? ((d.m) / 12) : 0;
  d.m = (d.m) > 12 ? (d.m) % 12 : d.m;
  printf("\nDate after addition of days: %02d.%02d.%d", d.d, d.m, d.y);
}
void addMonth(Date d, int mon)
{
  d.y += (d.m + mon) > 12 ? ((d.m + mon) / 12) : 0;
  d.m = (d.m + mon) > 12 ? (d.m + mon) % 12 : d.m + mon;
  if (d.d > days[d.m - 1])
  {
    printf("\nDate after addition of months: Does not exist.");
  }
  else
  {
    printf("\nDate after addition of months: %02d.%02d.%d", d.d, d.m, d.y);
  }
}
void addYear(Date d, int yr)
{
  if (d.d == 29 && ((d.y + yr) % 4 != 0 || ((d.y + yr) % 100 == 0 && (d.y + yr) % 400 != 0)))
  {
    printf("\nDate after addition of years: Does not exist.");
  }
  else
  {
    printf("\nDate after addition of years: %02d.%02d.%d", d.d, d.m, d.y + yr);
  }
}
int main()
{
  int d, m, y;
  Date date;
  printf("\nEnter a Date:\n");
  printf("Day: ");
  scanf("%d", &date.d);
  printf("Month: ");
  scanf("%d", &date.m);
  printf("Year: ");
  scanf("%d", &date.y);
  printf("Enter the number of Days to add: ");
  scanf("%d", &d);
  printf("Enter the number of Months to add: ");
  scanf("%d", &m);
  printf("Enter the number of Years to add: ");
  scanf("%d", &y);
  displayDate(date);
  displayMonth(date);
  nextDay(date);
  nextMonth(date);
  nextYear(date);
  addDay(date, d);
  addMonth(date, m);
  addYear(date, y);
  return 0;
}