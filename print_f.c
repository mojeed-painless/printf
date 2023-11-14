#include "main.h"

/**
 * _printf - Receives the main string
 * @format: A string containing all characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{

	int ch_print = 0;

	va_list arg_list;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arg_list, format);

	while (*format)
	{
		if (*format != '%'){
			write(1, format, 1);
			ch_print++;
		}
		else 
		{
			format++;

			if (*format == '\0')
			{
				break;
			}

			if (*format == '%')
			{
				write(1, format, 1);
				ch_print++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(arg_list, int);
				write(1, &c, 1);
				ch_print++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(arg_list, char*);
				int str_l = 0;

				while (str[str_l] != '\0')
					str_l++;

				write(1, str, str_l);
				ch_print += str_l;
			}
		}

		format++;
	}

	va_end(arg_list);

	return ch_print;

}
