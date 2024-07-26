#include <stdio.h>
struct Time
{
  int h, m, s;
};
void sum(struct Time t1, struct Time t2)
{
  int s = (t1.s + t2.s) % 60;
  int m = (t1.m + t2.m + ((t1.s + t2.s) / 60)) % 60;
  int h = t1.h + t2.h + ((t1.m + t2.m + ((t1.s + t2.s) / 60)) / 60);
  printf("Sum of the time is:\n%d Hours %d Minutes %d Seconds", h, m, s);
}
int main()
{
  int h, m, s;
  struct Time time[2];
  for (int i = 0; i < 2; i++)
  {
    printf("\nEnter the data of Time - %d:\n", i + 1);
    printf("Hours: ");
    scanf("%d", &time[i].h);
    printf("Minutes: ");
    scanf("%d", &time[i].m);
    printf("Seconds: ");
    scanf("%d", &time[i].s);
  }
  sum(time[0], time[1]);
  return 0;
}