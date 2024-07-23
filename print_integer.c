#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_integer - function that print a integer
 * @arguments: integer to print
 * Return: 1
 */
void printnumber(int i)
{

  if (i / 10 != 0)
  {
    putchar(i % 10);
    printnumber((i - i % 10) / 10);
  }
  else if ((i / 10 == 0) && (i % 10 != 0) && (i > 0))
    putchar(i % 10);
  else if ((i / 10 == 0) && (i % 10 != 0) && (i <= 0))
    putchar(-i % 10);
}

int print_integer(va_list arguments)
{
  int number = va_arg(arguments, int);

  if (number < 0)
  {
    putchar('-');
    number = -number;
  }

  if (number == 0)
  {
    putchar('0');
  }

  if (number / 10)
  {
    printnumber(number / 10);
  }

  putchar(number % 10 + '0');
  return (1);
}
