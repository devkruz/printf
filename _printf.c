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

	if (format == NULL)
		return (-1);

	format_type format_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_num},
		{"i", print_num},
		{"b", print_bin},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_controller},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};

		va_start(va_list_ptr, format);

	printed_chars = controller(format, format_list,  va_list_ptr);

	va_end(va_list_ptr);

	return (printed_chars);

}
