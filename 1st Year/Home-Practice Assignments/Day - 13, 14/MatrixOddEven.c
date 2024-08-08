#include <stdio.h>
int main()
{
  int n, m, odd = 0, even = 0;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("Enter the number of columns: ");
  scanf("%d", &m);
  int arr[n][m];
  printf("Enter the elements of the Matrix\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &arr[i][j]);
      if (arr[i][j] % 2 == 0)
      {
        even++;
      }
      else
      {
        odd++;
      }
    }
  }
  printf("Frequency of Odd Numbers: %d\n", odd);
  printf("Frequency of Even Numbers: %d", even);
  return 0;
}
