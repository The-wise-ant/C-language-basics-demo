#include <stdio.h>

/*
This program demonstrates sorting an array of integers in descending order using the bubble sort algorithm.
It initializes an array of integers with unsorted values and calculates the size of the array.
The sort function implements the bubble sort algorithm, which repeatedly steps through the array,
compares adjacent elements, and swaps them if they are in the wrong order.
The printArray function prints the sorted array after sorting.

The main function first prints the total bytes occupied by the array and its length.
Then, it sorts the array using the sort function and prints the sorted array using the printArray function.
*/

void sort(int array[], int size);
void printArray(int array[], int size);

int main()
{

  int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};

  int size = sizeof(array) / sizeof(array[0]);

  printf("total bytes: %d \n", sizeof(array));
  printf("length: %d \n", size);

  sort(array, size);
  printArray(array, size);

  return 0;
}

void sort(int array[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (array[j] < array[j + 1])
      {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size)
{

  for (int i = 0; i < size; i++)
  {

    printf("%d ", array[i]);
  }
  printf("\n"); // Print newline after all elements are printed
}