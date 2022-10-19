#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef va_list va_type;

/**
* struct format_type - defines a structure for symbols and functions
*
* @symbol: The symbol specified
* @func: The function associated
*/

typedef struct format_type
{

	char *symbol;
	int (*func)(va_type);
} format_type;


/* str_func prototypes */
int print_char(va_type);
int print_string(va_type);
int print_percent(va_type);
int print_reversed(va_type arg_list);
int rot13(va_type arg_list);


/* num_funcs prototypes */
int print_unsgined_num(unsigned int);
int print_num(va_type);
int unsigned_controller(va_list list);

/* base_funcs prototypes */
int print_bin(va_type);
int print_octal(va_type arg_list);
int print_hex(va_type arg_list);
int print_heX(va_type arg_list);
int hex_check(int num, char x);


/* _printf prototype */
int _printf(const char *format, ...);

/* helper function prototype */
int controller(const char *, format_type *, va_type);
int _putchar(char c);
char *rev_string(char *);
unsigned int base_len(unsigned int, int);
char *_memcpy(char *, char *, unsigned int);
void write_base(char *);

#endif
