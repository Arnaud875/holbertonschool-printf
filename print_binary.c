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
	int i;
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
	int started = 0;

	for (i = 0; i < (int)(sizeof(unsigned int) * 8); i++)
	{
		if (num & mask)
		{
			putchar('1');
			started = 1;
			count++;
		}
		else if (started)
		{
			putchar('0');
			count++;
		}
		mask >>= 1;
	}

	if (count == 0)
	{
		putchar('0');
		count++;
	}

	return count;
}