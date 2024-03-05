#include <stdio.h>
#include <string.h>

/* This program demonstrates sorting an array of characters in ascending order using the bubble sort algorithm.
   It initializes an array of characters and calculates its size.
   The sort function sorts the array in ascending order.
   The printArray function prints the sorted array.
*/

void sort(char array[], int size);
void printArray(char array[], int size);

int main()
{

  char array[] = {'F', 'A', 'D', 'B', 'C'};
  int size = sizeof(array) / sizeof(array[0]);

  sort(array, size);
  printArray(array, size);

  return 0;
}

void sort(char array[], int size)
{

  for (int i = 0; i < size - 1; i++)
  {

    for (int j = 0; j < size - i - 1; j++)
    {
      if (array[j] > array[j + 1])
      {

        char temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void printArray(char array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%c ", array[i]);
  }
  printf("\n");
}