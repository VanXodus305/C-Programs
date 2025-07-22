// Given an array arr[] of size N, find the prefix sum of the array. A prefix sum array is another array prefixSum[] of the same size, such that the value of prefixSum[i] is arr[0] + arr[1] + arr[2] . . . arr[i].
// Input Array: 3 4 5 1 2
// Output Array: 3 7 12 13 15

#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *file = fopen("input.txt", "r");
  if (file == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }

  int n, sum = 0;
  fscanf(file, "%d", &n);

  int arr[n];
  int prefixSum[n];

  for (int i = 0; i < n; i++)
  {
    fscanf(file, "%d", &arr[i]);
    prefixSum[i] = (i == 0) ? arr[i] : prefixSum[i - 1] + arr[i];
  }

  fclose(file);

  printf("Prefix Sum Array: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", prefixSum[i]);
  }
  printf("\n");

  return 0;
}