#include <stdio.h>
#include <stdlib.h>

int main()
{

  int *arr = NULL;
  int size;

  printf("Enter size of array: \n");
  scanf("%d", &size);

  arr = malloc(sizeof(int) * size);

  if (arr == NULL)
  {
    printf("Error during memory allocation");
    return -1;
  }

  for (int i = 0; i < size; i++)
  {

    printf("Enter element %d of the array: \n", i);
    scanf("%d", &arr[i]);
  }

  printf("Those are the values in the array: \n");

  for (int i = 0; i < size; i++)
  {

    printf("element %d is: %d \n", i, arr[i]);
  }

  free(arr);

  return 0;
}