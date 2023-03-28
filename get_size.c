#include "main.h"

/**
 * get_size - extracts the field size from a format string
 * @format: format string to extract the field size from
 * @i: pointer to the index of the current character in the format string
 *
 * Return: field size on success, 0 otherwise
 */

int get_size(const char *format, int *i)
{
	int size = 0;

	if (format[*i] >= '0' && format[*i] <= '9')
	{
		while (format[*i] >= '0' && format[*i] <= '9')
		{
			size = size * 10 + format[*i] - '0';
			(*i)++;
		}
	}

	return (size);
}
