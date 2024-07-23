#include "main.h"
#include <unistd.h>

/**
 * _putchar - write a character to stdout
 * @character: the character to write
 * Return: the number of bytes written in the console
 */
int _putchar(char character)
{
	return (write(1, &character, 1));
}
