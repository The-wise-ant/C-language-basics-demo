#include <stdio.h>

/*
This program aims to find the element in an array that appears only once while all other elements
are repeated exactly twice. It iterates through the array and checks each element against its neighboring elements
to identify the non-repeated element. Once found, it prints the element and its position in the array.

Note: This implementation assumes that the array has at least one non-repeated element and that all other elements
are repeated exactly twice.
*/

int main()
{
  int arr[] = {1, 1, 2, 2, 3, 4, 4};

  int arrLength = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < arrLength; i++)
  {

    if (
        (i == 0 && arr[i] != arr[i + 1]) ||
        (i == arrLength - 1 && arr[i] != arr[i - 1]) ||
        (arr[i] != arr[i - 1] && arr[i] != arr[i + 1]))
    {
      printf("found non repetead element: %d at position: %d", arr[i], i);
      break;
    }
  }

  return 0;
}