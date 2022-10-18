#include "main.h"

/**
 * print_char - prints character
 * @arg_list: list of arguments
 *
 * Return: number of characters printed
 */

int print_char(va_type arg_list)
{
	_putchar(va_arg(arg_list, int));
	return (1);
}



/**
 * print_string - prints a string
 * @arg_list: list of arguments
 *
 * Return: number of characters printed
 */

int print_string(va_type arg_list)
{
	int i;
	char *str_ptr;

	str_ptr = va_arg(arg_list, char *);

	if (str_ptr == NULL)
		str_ptr = "(null)";

	for (i = 0; str_ptr[i] != '\0'; i++)
		_putchar(str_ptr[i]);
	return (i);
}


/**
 * print_percent - prints a percent symbol
 * @arg_list: list of arguments
 *
 * Return: number of characters printed
*/

int print_percent(va_type arg_list)
{
	(void) arg_list;

	_putchar('%');
	return (1);
}
