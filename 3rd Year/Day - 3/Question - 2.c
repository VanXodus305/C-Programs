// Write a program to use rand() function to generate 100 random numbers between 1 and 100 and store them in input.txt. Then read those numbers from input.txt and sort them using insertion sort. Finally, print the sorted numbers and the number of iterations taken to sort them in output.txt.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  FILE *inputFile = fopen("input.txt", "w");
  if (inputFile == NULL)
  {
    perror("Error opening input file");
    return;
  }

  srand(time(NULL));

  for (int i = 0; i < 100; i++)
  {
    int num = rand() % 100 + 1; // Random number between 1 and 100
    fprintf(inputFile, "%d\n", num);
  }
  fclose(inputFile);

  inputFile = fopen("input.txt", "r");
  if (inputFile == NULL)
  {
    perror("Error opening input file");
    return;
  }

  int arr[100];
  int n = 0;
  while (fscanf(inputFile, "%d", &arr[n]) != EOF)
  {
    n++;
  }
  fclose(inputFile);

  int count = 0;
  for (int i = 1; i < n; i++)
  {
    count++;
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      count++;
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }

  FILE *outputFile = fopen("output.txt", "w");
  if (outputFile == NULL)
  {
    perror("Error opening output file");
    return;
  }

  fprintf(outputFile, "Sorted numbers:\n");
  for (int i = 0; i < n; i++)
  {
    fprintf(outputFile, "%d\n", arr[i]);
  }

  fprintf(outputFile, "Number of iterations: %d\n", count);
  fclose(outputFile);
}