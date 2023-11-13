#include "main.h"

/**
 * print_char - Prints character
 * @c: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
