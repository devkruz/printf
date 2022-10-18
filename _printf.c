#include "main.h"

/**
 * _printf - Print a formated string
 * @format: The string to be printed
 *
 * Return: The formated string
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	va_type va_list_ptr;

	format_type format_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_num},
		{"i", print_num},
		{"b", print_bin},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(va_list_ptr, format);

	printed_chars = controller(format, format_list,  va_list_ptr);

	va_end(va_list_ptr);

	return (printed_chars);

}
