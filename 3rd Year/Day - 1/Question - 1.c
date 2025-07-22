// Write a program to find out the second smallest and second largest element stored in an array of n integers.
// Input: Size of the array is ‘n’ and read ‘n’ number of elements from a disc file.
// Output: Second smallest, Second largest

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
  FILE *file = fopen("input.txt", "r");
  if (file == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }

  int n;
  fscanf(file, "%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    fscanf(file, "%d", &arr[i]);
  }

  fclose(file);

  int first_smallest = INT_MAX, second_smallest = INT_MAX;
  int first_largest = INT_MIN, second_largest = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] < first_smallest)
    {
      second_smallest = first_smallest;
      first_smallest = arr[i];
    }
    else if (arr[i] < second_smallest && arr[i] != first_smallest)
    {
      second_smallest = arr[i];
    }

    if (arr[i] > first_largest)
    {
      second_largest = first_largest;
      first_largest = arr[i];
    }
    else if (arr[i] > second_largest && arr[i] != first_largest)
    {
      second_largest = arr[i];
    }
  }

  printf("Second Smallest: %d\n", second_smallest);
  printf("Second Largest: %d\n", second_largest);

  return 0;
}