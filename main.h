#ifndef _PRINTF_H_
#define _PRINTF_H_

#define BUFSIZE 1024

/* Importing Libraries */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* Type Definitions */

/**
 * struct printer - structure for printing various types
 * @symbol: type to print
 * @func_t: function to print
 */

typedef struct printer
{
	const char symbol;
	int (*func_t)(va_list);
} printer_t;

/* Function Prototypes */

int _write(char c);
int _printf(const char *format, ...);
int print_char(va_list arguments);
int print_string(va_list arguments);
int print_percent(__attribute__((unused))va_list arguments);
int print_integer(va_list arguments);
int print_decimal(va_list arguments);
int (*get_flag_func(const char s))(va_list);


int (*func_t)(va_list);

#endif /* _PRINTF_H_ */
