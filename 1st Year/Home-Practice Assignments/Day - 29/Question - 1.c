#include <stdio.h>
#include <stdlib.h>
struct Time
{
  int h, m, s;
};
void difference(struct Time t1, struct Time t2)
{
  int s = ((t1.h * 3600) + (t1.m * 60) + t1.s) - ((t2.h * 3600) + (t2.m * 60) + t2.s);
  int h = s / 3600;
  int m = (s - (h * 3600)) / 60;
  s = s - ((h * 3600) + (m * 60));
  printf("Difference of the time is:\n%d Hours %d Minutes %d Seconds", h, m, s);
}
int main()
{
  int h, m, s, f;
  struct Time time[2];
  printf("Enter Choice for Date Format:\n1: 12 Hr Format\n2: 24 Hr Format\nEnter Choice: ");
  scanf("%d", &f);
  for (int i = 0; i < 2; i++)
  {
    printf("\nEnter the data of Time - %d:\n", i + 1);
    printf("Hours: ");
    scanf("%d", &time[i].h);
    printf("Minutes: ");
    scanf("%d", &time[i].m);
    printf("Seconds: ");
    scanf("%d", &time[i].s);
    if ((f == 1 && time[i].h > 12) || (f == 2 && time[i].h > 23))
    {
      printf("Invalid Date.");
      exit(0);
    }
  }
  difference(time[0], time[1]);
  return 0;
}