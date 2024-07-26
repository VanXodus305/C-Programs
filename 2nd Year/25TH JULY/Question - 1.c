// WAP to create an array of size N and perform the following operations:
// 1) Reverse the array
// 2) Find the duplicate elements and their frequency
// 3) Replace the array using another array

#include <stdio.h>
#include <stdlib.h>

int n;

void reverse(int *arr, int index)
{
  if (index == n / 2)
  {
    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
      printf("%d ", arr[i]);
    }
    printf("\n");
    return;
  }
  int temp;
  temp = arr[index];
  arr[index] = arr[n - index - 1];
  arr[n - index - 1] = temp;
  reverse(arr, index + 1);
}

void duplicate(int *arr, int index)
{
  if (index == n)
  {
    printf("\n");
    return;
  }
  int count = 0;
  if (arr[index] != -1)
  {
    count = 1;
    for (int j = index + 1; j < n; j++)
    {
      if (arr[index] == arr[j])
      {
        count++;
        arr[j] = -1;
      }
    }
    if (count > 1)
    {
      printf("%d (Frequency: %d\n) ", arr[index], count);
    }
  }
  duplicate(arr, index + 1);
}

void replace(int *arr1, int *arr2, int index)
{
  if (index == n)
  {
    printf("The array after replacing is: ");
    for (int i = 0; i < n; i++)
    {
      printf("%d ", arr1[i]);
    }
    printf("\n");
    return;
  }
  arr1[index] = arr2[index];
  replace(arr1, arr2, index + 1);
}

int main()
{
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int arr[n], arr2[n], choice;
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Enter 1 to reverse the array, 2 to find duplicate elements, 3 to replace the array with another array: ");
  scanf("%d", &choice);
  printf("Original array: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  switch (choice)
  {
  case 1:
    reverse(arr, 0);
    break;
  case 2:
    duplicate(arr, 0);
    break;
  case 3:
    printf("Enter the elements to replace with: ");
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr2[i]);
    }
    replace(arr, arr2, 0);
    break;
  default:
    printf("Invalid choice.\n");
  }
}