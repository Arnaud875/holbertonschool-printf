#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_integer - function that print a integer
 * @arguments: integer to print
 * Return: 1
 */
int print_string(va_list arguments)
{
  int i;
  char *string = va_arg(arguments, char *);
  for (i = 0; string[i] != '\0'; i++)
  {
    _putchar(string[i]);
  }

  return (i);
}