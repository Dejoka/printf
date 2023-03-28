#include "main.h"

/**
 * get_width - retrieves the field width for non-custom conversion specifiers
 * @format: format string
 * @i: pointer to current position in format string
 * @list: va_list of arguments
 *
 * Return: the field width if present, otherwise -1
 */

int get_width(const char *format, int *i, va_list list)
{
	int width = 0;

	while (format[*i] >= '0' && format[*i] <= '9')
	{
		width = (width * 10) + (format[*i] - '0');
		(*i)++;
	}

	if (format[*i] == '*')
	{
		(*i)++;
		width = va_arg(list, int);
	}

	return (width);
}
