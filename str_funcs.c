#include "main.h"

/**
 * print_char - prints character
 * @arg_list: aargument list
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
 * @arg_list: argument list
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
 * @arg_list: argument list
 *
 * Return: number of characters printed
*/

int print_percent(va_type arg_list)
{
	(void) arg_list;

	_putchar('%');
	return (1);
}


/**
 * print_reversed - print reverted string
 * @arg_list: argument list
 *
 * Return: amount of characters printed
 */
int print_reversed(va_type arg_list)
{
	int len;
	char *str, *ptr;

	str = va_arg(arg_list, char *);

	if (str == NULL)
		return (-1);

	ptr = rev_string(str);

	if (ptr == NULL)
		return (-1);

	for (len = 0; ptr[len]; len++)
		_putchar(ptr[len]);

	free(ptr);
	return (len);
}

/**
 * rot13 - print string in rot13
 * @arg_list: string to print
 *
 * Return: amount of string printed
 */
int rot13(va_type arg_list)
{
	int i, j;
	char *str;
	char rot13_down[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_up[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(arg_list, char *);

	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == rot13_down[j])
			{
				_putchar(rot13_up[j]);
				break;
			}
		}
		if (j == 53)
			_putchar(str[i]);
	}
	return (i);
}

