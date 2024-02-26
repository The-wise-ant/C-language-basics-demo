#include <stdio.h>

int main()
{

  int num;

  printf("Insert a number. The program will count to that number and tell\n which number is even and which uneven\n");
  scanf("%d", &num);

  for (int i = 0; i <=num; i++)
  {

    if (i % 2 == 0)
    {
      printf("%d is even\n", i);
    }
    if (i % 2 != 0)
    {
      printf("%d is uneven\n", i);
    }
  }

  return 0;
}