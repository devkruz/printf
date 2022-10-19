#include "main.h"

/**
 * print_char - prints character
 * @arg_list: arg_list of arguments
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
 * @arg_list: arg_list of arguments
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
 * @arg_list: arg_list of arguments
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
 * @arg_list: Argument passed to the function
 *
 * Return: amount of characters printed
 */
int print_reversed(va_type arg_list)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg_list, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
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
	int i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(arg_list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				_putchar(u[x]);
				break;
			}
		}
		if (x == 53)
			_putchar(str[i]);
	}
	return (i);
}

