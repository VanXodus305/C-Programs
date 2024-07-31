// Write a program to create an array of n elements using dynamic memory allocation. Calculate sum of all the prime elements of the array using function and de-allocate the memory of the array after its use.

#include <stdio.h>
#include <stdlib.h>

int n;

int sumOfPrime(int *arr)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    int flag = 0;
    for (int j = 2; j <= arr[i] / 2; j++)
    {
      if (arr[i] % j == 0)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0 && arr[i] != 1)
      sum += arr[i];
  }
  return sum;
}

void main()
{
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int *arr = (int *)malloc(sizeof(int) * n);
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("The sum of all the prime elements of the array is: %d\n", sumOfPrime(arr));
  free(arr);
}
