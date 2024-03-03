#include <stdio.h>
#include "demo_header_functions.h"

/*
This program demonstrates how to import a custom header file named "demo_header_functions.h" 
and use its functions in the main program. The main function calls the function hello() 
defined in the header file, passing it two arguments: a name and an age. 
The hello() function simply prints a greeting message with the provided name and age. 
By including the header file, the main program gains access to the function declaration and definition 
without needing to define it directly within the main source file.
*/




int main()
{

  hello("Mark", 23);

  return 0;
}

void hello(char name[], int age)
{
  printf("Hello %s! \n", name);
  printf("Your are %d years old! \n", age);
}