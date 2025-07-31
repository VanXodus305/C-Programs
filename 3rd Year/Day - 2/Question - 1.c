// Aim of the program: Write a program in C to convert the first ‘n’ decimal numbers of a disc file to binary using recursion. Store the binary value in a separate disc file.
// Note# Read the value of ‘n’, source file name and destination file name from command line arguments. Display the decimal numbers and their equivalent binary numbers from the output file.
// Give the contents of the input disc file “inDec.dat” as 30 75 2564 …
// Contents of the output disc file “outBin.dat” as
// The binary equivalent of 30 is 0000000000011110
// The binary equivalent of 75 is 0000000001001011
// The binary equivalent of 2564 is 0000101000000100
// Terminal Input: $gcc lab2q1.c-o lab2q1 $./lab2q1 150 inDec.dat outBin.dat
// Output: Content of the first ‘n’ decimal and their equivalent binary numbers

#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(int n, FILE *outFile)
{
  if (n == 0)
  {
    return;
  }
  decimalToBinary(n / 2, outFile);
  fprintf(outFile, "%d", n % 2);
}

void main(int argc, char *argv[])
{
  if (argc != 4)
  {
    printf("Usage: %s <n> <source_file> <destination_file>\n", argv[0]);
    return;
  }

  int n = atoi(argv[1]);
  FILE *inFile = fopen(argv[2], "r");
  FILE *outFile = fopen(argv[3], "w");

  if (inFile == NULL || outFile == NULL)
  {
    printf("Error opening files.\n");
    return;
  }

  int decimalNumber;
  for (int i = 0; i < n && fscanf(inFile, "%d", &decimalNumber) == 1; i++)
  {
    fprintf(outFile, "The binary equivalent of %d is ", decimalNumber);
    decimalToBinary(decimalNumber, outFile);
    fprintf(outFile, "\n");
  }

  fclose(inFile);
  fclose(outFile);
}