#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * print_char - function that print a character
 * @arguments: character to print
 * Return: 1
 */
int print_char(va_list arguments)
{
  _putchar((char)va_arg(arguments, int));
  return (1);
}
