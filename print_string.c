#include "main.h"

/**
 * print_string - Prints a string
 * @s: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_string(va_list s)
{
	int i;
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
