#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_integer - function that print a integer
 * @arguments: integer to print
 * Return: 1
 */
int print_integer(va_list arguments)
{
  int number = va_arg(arguments, int);
  char buffer[7];
  int i;

  itoa(number, buffer, 10);
  for (i = 0; buffer[i] != '\0'; i++)
  {
    _putchar(buffer[i]);
  }

  return (1);
}
