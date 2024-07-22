#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * print_integer - function that print a integer
 * @arguments: integer to print
 * Return: 1
 */
int print_integer(va_list arguments)
{
  int number = va_arg(arguments, int);
  _putchar((number) + '0');
  if (number > 9)
  {
    putchar((number / 10) + '0');
  }
  return (1);
}