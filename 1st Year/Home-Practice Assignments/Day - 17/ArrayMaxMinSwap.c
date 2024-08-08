#include <stdio.h>
void swap(int row, int col, int arr1[row][col])
{
  int colmax, rowmax, colmin, rowmin = 0;
  int max, min = arr1[0][0];
  int temp;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr1[i][j] > max)
      {
        rowmax = i;
        colmax = j;
      }
      if (arr1[i][j] < min)
      {
        rowmin = i;
        colmin = j;
      }
    }
  }
  temp = arr1[rowmax][colmax];
  arr1[rowmax][colmax] = arr1[rowmin][colmin];
  arr1[rowmin][colmin] = temp;
}
int main()
{
  int n, m;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("Enter the number of columns: ");
  scanf("%d", &m);
  int arr[n][m];
  printf("Enter the numbers in the array:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  printf("Swapped Array:\n");
  swap(n, m, arr);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}