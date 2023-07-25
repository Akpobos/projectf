#include "main.h"

/**
 * _printf - C printf clone
 * @format: Format string
 *
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0, is_fnd;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				if (count == 0)
					count = -1;
				break;
			}
			fmt_space(format, &i);
			if (format[i] == '%')
			{
				count += _putchar(format[i]);
			}
			else
			{
				is_fnd = print_fmt(format[i], args);
				if (is_fnd < 0)
					count += _putchar(format[i]);
				else
					count += is_fnd;
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
