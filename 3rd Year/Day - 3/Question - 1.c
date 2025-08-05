// Write a program to read numbers from a file "input.txt", sort them using insertion sort, and print the sorted numbers along with the number of iterations taken to sort them to "output.txt".

#include <stdio.h>
#include <stdlib.h>

void main () {
  FILE *inputFile = fopen("input.txt", "r");
  if (inputFile == NULL) {
    perror("Error opening input file");
    return;
  }

  int n = 0;
  int temp;
  while (fscanf(inputFile, "%d", &temp) != EOF) {
    n++;
  }
  rewind(inputFile);

  int arr[n];
  for (int i = 0; i < n; i++) {
    fscanf(inputFile, "%d", &arr[i]);
  }
  fclose(inputFile);

  int count = 0;
  for (int i = 1; i < n; i++) {
    count++;
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      count++;
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }

  FILE *outputFile = fopen("output.txt", "w");
  if (outputFile == NULL) {
    perror("Error opening output file");
    return;
  }

  fprintf(outputFile, "Sorted numbers:\n");
  for (int i = 0; i < n; i++) {
    fprintf(outputFile, "%d\n", arr[i]);
  }
  
  fprintf(outputFile, "Number of iterations: %d\n", count);
  
  fclose(outputFile);
}