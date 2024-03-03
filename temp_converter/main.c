#include <stdio.h>
#include <ctype.h>

/*
This program converts temperature values between Celsius and Fahrenheit units based on user input.
It prompts the user to specify whether the temperature is in Celsius (C) or Fahrenheit (F).
It then converts the temperature to the other unit accordingly. If the temperature is in Celsius,
it converts it to Fahrenheit using the formula (Celsius * 9 / 5) + 32. If the temperature is in Fahrenheit,
it converts it to Celsius using the formula ((Fahrenheit - 32) * 5) / 9.
The program utilizes the toupper function from the ctype.h library to ensure case-insensitive input handling.
It then prints the converted temperature with one decimal place.
*/

int main()
{

  char unit;

  float temp;

  printf("\nIs the temperature in (F) or (C)? : ");
  scanf("%c", &unit);

  unit = toupper(unit);

  if (unit == 'C')
  {
    printf("\nEnter the temperature in Celsius:");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("\nThe temperature in Fahrenheit is: %.1f", temp);
  }

  else if (unit == 'F')
  {
    printf("\nEnter the temperature in Fahrenheit:");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("\nThe temperature in Celsius is: %.1f", temp);
  }

  else
  {
    printf("\n %c format specifiers is not a valid unit of temperature", unit);
  }

  return 0;
}