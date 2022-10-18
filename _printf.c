#include "main.h"
#include <stdarg.h>
/**
 * _printf - Print a formated string
 * @formate: The string to be printed
 *
 * Return: The formated string
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	va_type va_format;
	format_type format_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(va_format, format);

	printed_chars = parser(format, format_list, va_format);

	va_end(va_format);

	return (printed_chars);

}
