#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef va_list va_type;

/**
* struct format_type - defines a structure for symbols and functions
*
* @symbol: The symbol specified
* @func: The function associated
*/

typedef struct format_type
{

	char *symbol;
	int (*func)(va_type);
} format_type;


/* function prototype */
int _printf(const char *format, ...);
int print_char(va_type);
int print_string(va_type);
int print_percent(va_type);

/* helper function prototype */

int controller(const char *, format_type *, va_type);
int _putchar(char c);

#endif
