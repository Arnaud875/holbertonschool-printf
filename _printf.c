#include "main.h"
#include <stdio.h>

/**
 * _printf - Format a string and print it in the console
 * @format: The string formatted with variadic arguments
 * @...: The variadic arguments
 * Return: Number of bytes printed in the console
 * without the null byte.
 */
int _printf(const char *format, ...)
{
    int i = 0, writtenBytes = 0;

    for (; format[i] != '\0'; i++)
    {
        printf("%c", format[i]);
        writtenBytes++;
    }

    return (writtenBytes);
}
