#include "main.h"

/**
 * _putchar - print the character @c to the stdout
 * @c: the character to be printed
 *
 * Return: 1 if successfull else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
