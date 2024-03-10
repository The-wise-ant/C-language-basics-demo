#include <stdio.h>
#include <stdlib.h>

int main()
{

  int *arr, size;

  size = 5;

  arr = calloc(size, sizeof(int));

  if (arr == NULL)
  {
    printf("Error: memory allocation failed\n");
    return -1;
  }

  for (int i = 0; i < size; i++)
  {
    arr[i] = i;
    printf("element %d is equal to: %d \n", i, arr[i]);
  }
  printf("\n");

  int newSize = 10;

  int *temp = realloc(arr, sizeof(int) * newSize);
  if (temp == NULL)
  {
    printf("Error: memory allocation failed\n");
    free(arr);
    return -1;
  }
  else
  {
    arr = temp;
  }

  for (int i = size; i < newSize; i++)
  {
    arr[i] = 10 + i;
  }

  printf("new values of the array are: \n");
  for (int i = 0; i < newSize; i++)
  {
    printf(" %d ", arr[i]);
  }

  free(arr);
  return 0;
}