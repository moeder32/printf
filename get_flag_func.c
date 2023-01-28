#include "main.h"

/**
 * get_flag_func - function to find a function pointer
 * - associated with specifier
 *
 * @a: specifier to find the correct function
 *
 * Return: function pointer
 */

int (*get_flag_func(const char a))(va_list)
{
	unsigned int i = 0;

	printer_t ops[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_integer},
		{'d', print_decimal},
		{'\0', NULL}
	};


	for (; ops[i].symbol; i++)
	{
		if (a == ops[i].symbol)
			return (ops[i].func_t);
	}

	return (NULL);
}
