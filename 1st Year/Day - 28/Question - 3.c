#include <stdio.h>
struct Distance
{
  int km, meter;
};
int main()
{
  int km, m;
  struct Distance dist[2];
  for (int i = 0; i < 2; i++)
  {
    printf("\nEnter the data of Distance - %d:\n", i + 1);
    printf("Kilometer: ");
    scanf("%d", &dist[i].km);
    printf("Meter: ");
    scanf("%d", &dist[i].meter);
  }
  km = dist[0].km + dist[1].km + ((dist[0].meter + dist[1].meter) / 1000);
  m = (dist[0].meter + dist[1].meter) % 1000;
  printf ("Sum of the distances: %d kilometers %d meters", km, m);
  return 0;
}