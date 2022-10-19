#include "main.h"

/**
 * controller - calls the required format function
 * @format: the string to be formated
 * @arg_list: the argument list
 *
 * Return: total number of character printed
 */

int controller(const char *string, format_type format_list[], va_type arg_list)
{
	int i, j, char_printed, total_char_printed;

	total_char_printed = 0;

	for (i = 0; string[i]; i++)
	{
		if (string[i] == '%')
		{
			for (j = 0;
			format_list[j].symbol != NULL; j++)
			{
				if (string[i + 1] ==
				format_list[j].symbol[0])
				{
					char_printed =
					format_list[j].func(arg_list);

					if (char_printed == -1)
						return (-1);
					total_char_printed +=
					char_printed;

					break;
				}

			}

			if (format_list[j].symbol == NULL
			&& string[i + 1] != ' ')
			{
				if (string[i + 1] != '\0')
				{
					_putchar(string[i]);
					_putchar(string[i + 1]);
					total_char_printed =
					total_char_printed +
					2;
				}
			}

			i = i + 1; /* increament i to skip format symb */
		}
		else
		{
			_putchar(string[i]);
			total_char_printed++;
		}
	}

	return (total_char_printed);
}
