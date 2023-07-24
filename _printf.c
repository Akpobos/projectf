#include "main.h"

/**
 * _printf - C printf clone
 * @format: Format string
 *
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list args;

	if (!format)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				count += _putchar(format[i]);
			}
			else
			{
				count += print_fmt(format[i], args);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
