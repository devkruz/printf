#include "main.h"

/**
 * print_num - prints a number
 * @args_list: the number to be printed
 *
 * Return: number of arguments printed
 */

int print_num(va_type args_list)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(args_list, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * print_unsgined_num - prints an unsigned number
 * @n: unsigned integer to be printed
 *
 * Return: amount of numbers printed
 */

int print_unsgined_num(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * unsigned_controller - control print_unsigned_num input
 * @list: list of argumets
 *
 * Return: a count of the numbers
 */
int unsigned_controller(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_num(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_num(num));
}
