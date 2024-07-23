#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_string - function that print a string
 * @arguments: integer to print
 * Return: i
 */
int print_string(va_list arguments)
{
  int i;
  char *string = va_arg(arguments, char *);
  if (string == NULL)
  {
    _putchar('(');
    _putchar('n');
    _putchar('u');
    _putchar('l');
    _putchar('l');
    _putchar(')');

    return (6);
  }
  for (i = 0; string[i] != '\0'; i++)
  {
    _putchar(string[i]);
  }

  return (i);
}