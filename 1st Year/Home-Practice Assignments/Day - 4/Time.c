#include <stdio.h>

int main()
{
  int hour1, minute1, second1;
  int hour2, minute2, second2;
  int totalHour, totalMinute, totalSecond;
  printf("Enter the first time (hh:mm:ss): ");
  scanf("%d:%d:%d", &hour1, &minute1, &second1);
  printf("Enter the second time (hh:mm:ss): ");
  scanf("%d:%d:%d", &hour2, &minute2, &second2);
  totalHour = hour1 + hour2;
  totalMinute = minute1 + minute2;
  totalSecond = second1 + second2;
  if (totalMinute / 60 > 0)
  {
    totalHour += totalMinute / 60;
    totalMinute = totalMinute % 60;
  }
  if (totalSecond / 60 > 0)
  {
    totalMinute += totalSecond / 60;
    totalSecond = totalSecond % 60;
  }
  printf("Total Time: %d:%d:%d\n", totalHour, totalMinute, totalSecond);
  return 0;
}