#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h>

/**
 * struct PrintType - A structure to print a specific type
 * @type: The type
 * @print_type_function: Function pointer to print the type
 */
typedef struct PrintType
{
	char *type;
	int (*print_type_function)(va_list args);
} PrintType_t;

int _printf(const char *format, ...);

#endif
