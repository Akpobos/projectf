#include "main.h"

/**
 * _printf - C printf clone
 * @format: Format string
 *
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0, buff_i = 0;
	char buffer[BUFFER_SIZE];
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
		/*	fmt_space(format, &i);*/
			check_specifier(format[i], &count, args, buffer, &buff_i);
		}
		else
		{
			count += add_buffer(format[i], buffer, &buff_i);
		}
		i++;
	}
	va_end(args);
	count += print_buffer(buffer, &buff_i);
	return (count);
}
