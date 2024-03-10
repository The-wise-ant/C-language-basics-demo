#include <stdio.h>
#include <stdlib.h>

int main()
{

  int *arr, size;

  size = 10;

  arr = malloc(sizeof(int) * size);

  if (arr == NULL)
  {
    printf("Error:memory allocation failed\n");
  }

  for (int i = 0; i < size; i++)
  {
    arr[i] = i;
  }

  printf("Elements of the array are: \n");
  for (int i = 0; i < size; i++)
  {
    printf(" %d ", arr[i]);
  }
  printf("\n");

  size = 6;
  arr = realloc(arr, sizeof(int) * size);

  size = 6;
  int *temp = realloc(arr, sizeof(int) * size);
  if (temp == NULL)
  {
    printf("Error: memory reallocation failed\n");
    free(arr); // Free previously allocated memory before exiting
    return 1;
  }
  else
  {
    arr = temp; // Update arr with the new pointer after successful reallocation
  }

  printf("Elements of the modified array are: \n");
  for (int i = 0; i < size; i++)
  {
    printf(" %d ", arr[i]);
  }

  free(arr);
  return 0;
}