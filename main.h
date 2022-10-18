#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
* format_type - defines a structure for symbols and functions
*
* @sumbol: The symbol specified
* @func: The function associated
*/

struct format_type
{
	char *symbol:
	int (*func)(va_list);
};
typedef va_list va_type;
#endif
