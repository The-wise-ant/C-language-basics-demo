#include <stdio.h>
#include <stdlib.h>

int main()
{

  int *arr, size;

  printf("Enter size of the array: \n");
  scanf("%d", &size);

  arr = calloc(size, sizeof(int));

  if (arr == NULL)
  {
    printf("Error: memory allocation failed\n");
    return -1;
  }

  for (int i = 0; i < size; i++)
  {
    printf("Enter the value of element %d\n", i);
    scanf("%d", &arr[i]);
  }

  printf("The values of the elements in the array are: \n");

  for (int i = 0; i < size; i++)
  {
    printf("element %d is: %d \n", i, arr[i]);
  }

  free(arr);
  return 0;
}