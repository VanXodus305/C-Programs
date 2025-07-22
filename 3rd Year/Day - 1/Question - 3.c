// Write a program to read ‘n’ integers from a disc file that must contain some duplicate values and store them into an array. Perform the following operations on the array.
// a) Find out the total number of duplicate elements.
// b) Find out the most repeating element in the array.
// Input: Enter how many numbers you want to read from file: 15
// Output: The content of the array: 10 40 35 47 68 22 40 10 98 10 50 35 68 40 10
// Total number of duplicate values = 4 The most repeating element in the array = 10

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

  // Sort the array
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  // Find total number of duplicate elements and the most repeating element
  int duplicateCount = 0;
  int maxCount = 0;
  int mostRepeatingElement = arr[0];
  for (int i = 0; i < n - 1; i++)
  {
    int count = 0;
    if (arr[i] == arr[i + 1])
    {
      duplicateCount++;
      while (i < n - 1 && arr[i] == arr[i + 1])
      {
        count++;
        i++;
      }
      if (count > maxCount)
      {
        maxCount = count;
        mostRepeatingElement = arr[i];
      }
    }
  }

  printf("Total number of duplicate values = %d\n", duplicateCount);
  printf("The most repeating element in the array = %d\n", mostRepeatingElement);

  return 0;
}