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


/**
 * rev_string - reverses a string in place
 *
 * @str: string to reverse
 * Return: pointer to a character
 */

char *rev_string(char *str)
{
	int len;
	int head;
	char tmp;
	char *reversed;

	for (len = 0; str[len] != '\0'; len++)
	;

	reversed = malloc(sizeof(char) * len + 1);

	if (reversed == NULL)
		return (NULL);

	_memcpy(reversed, str, len);
	
	for (head = 0; head < len; head++, len--)
	{
		tmp = reversed[len - 1];
		reversed[len - 1] = reversed[head];
		reversed[head] = tmp;
	}
	return (reversed);
}

/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */

void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * base_len - the length for an octal number
 * @num: the number calculate it lenth
 * @base: base to be calculated by
 *
 * Return: integer representing the length of a number
 */

unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

/**
 * _memcpy - copy memory area
 * @reversed: destination for copying
 * @src: source to copy from
 * @n: number of bytes to copy
 *
 * Return: a pointer to reversed.
 */

char *_memcpy(char *reversed, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		reversed[i] = src[i];
	reversed[i] = '\0';
	return (reversed);
}

