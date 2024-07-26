#include <stdio.h>
int main()
{
  int n, s;
  printf("Enter the number of cities: ");
  scanf("%d", &n);
  printf("Enter the number of days: ");
  scanf("%d", &s);
  int arr[n][s];
  for (int i = 0; i < n; i++)
  {
    printf("Enter the temperature of City %d for %d days:\n", i + 1, s);
    for (int j = 0; j < s; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  printf("Temperature Details:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < s; j++)
    {
      printf("City %d, Day %d = %d\n", i + 1, j + 1, arr[i][j]);
    }
  }
  return 0;
}