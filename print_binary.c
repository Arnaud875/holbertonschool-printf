#include "main.h"

/**
 * print_binary - function that prints an unsigned int in binary
 * @arguments: va_list containing the unsigned int to print
 * Return: number of characters printed
 */
int print_binary(va_list arguments)
{
	unsigned int num = va_arg(arguments, unsigned int);
    int count = 0;
    int started = 0;

	int bits = sizeof(unsigned int) * 8;

	for (int i = bits - 1; i >= 0; i--)
    {
        if (num & (1 << i))
        {
            _putchar('1');
            started = 1;
            count++;
        }
        else if (started)
        {
            _putchar('0');
            count++;
        }
    }

	if (count == 0)
    {
        _putchar('0');
        count++;
    }

	return (count);
}
