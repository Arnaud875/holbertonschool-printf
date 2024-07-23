#include "main.h"

/**
 * _printf - Format a string and print it in the console
 * @format: The string formatted with variadic arguments
 * @...: The variadic arguments
 * Return: Number of bytes printed in the console
 * without the null byte.
 */
int _printf(const char *format, ...)
{
    int i = 0, j = 0, writtenBytes = 0;
    char type;
    va_list args;
    PrintType_t printer[] = {
        {"c", print_char},
        {"s", print_string},
        {"d", print_integer},
        {"i", print_integer},
        {NULL, NULL}};

    if (format == NULL)
        return (-1);

    va_start(args, format);

    for (; format[i] != '\0'; i++)
    {
        type = format[i + 1];
        if (format[i] == '%' && type == '%') /* Check if %% */
        {
            _putchar('%');
            i++;
            writtenBytes++;
            continue;
        }

        if (format[i] == '%' && type == '\0') /* Check if % and null bytes */
            return (-1);

        if (format[i] == '%')
        {
            for (j = 0; printer[j].type; j++)
            {
                if (*printer[j].type == type)
                    writtenBytes += printer[j].print_type_function(args);
            }

            i++;
        }
        else
        {
            _putchar(format[i]);
            writtenBytes++;
        }
    }

    va_end(args);
    return (writtenBytes);
}
