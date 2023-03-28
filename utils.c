#include "main.h"

/**
 * is_printable - checks if a character is printable
 * @c: the character to check
 * Return: 1 if c is printable, 0 otherwise
 */

int is_printable(char c)
{
	return (c >= 32 && c < 127);
}

/**
 * append_hexa_code - appends a hex code to a string
 * @code: the hex code to append
 * @str: the string to append the hex code to
 * @pos: the position to append the hex code to
 * Return: the new position in the string
 */

int append_hexa_code(char code, char str[], int pos)
{
	char hexa[] = "0123456789abcdef";

	str[pos++] = '\\';
	str[pos++] = 'x';
	str[pos++] = hexa[(code >> 4) & 0xf];
	str[pos++] = hexa[code & 0xf];

	return (pos);
}

/**
 * is_digit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if c is a digit, 0 otherwise
 */

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * convert_size_number - converts a number to a different size
 * @num: the number to convert
 * @size: the size to convert the number to
 * Return: the converted number
 */

long int convert_size_number(long int num, int size)
{
	long int res = num;

	switch (size)
	{
		case 104:
			res = (char)res;
			break;
		case 208:
			res = (short int)res;
			break;
		case 108:
			res = (long int)res;
			break;
		case 216:
			res = (long int)res;
			break;
		case 122:
			res = (intmax_t)res;
			break;
		case 172:
			res = (ptrdiff_t)res;
			break;
		default:
			break;
	}
	return (res);
}

/**
 * convert_size_unsgnd - converts an unsigned long int to the specified size
 * @num: the number to convert
 * @size: the size to convert the number to
 *
 * Return: the converted number
 */


long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == 0)
		return ((unsigned char)num);
	else if (size == 1)
		return ((unsigned short int)num);
	else if (size == 2)
		return ((unsigned long int)num);
	else
		return (num);
}
