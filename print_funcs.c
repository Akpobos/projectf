#include "main.h"

/**
 * print_char - prints a character
 * @args: va_list argument
 *
 * Return: 1
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_str - Prints string
 * @args: va_list argument
 *
 * Return: numbers of character printed to stdout
 */
int print_str(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (str)
	{
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
		return (i);
	}
	return (0);
}

/**
 * print_int - Prints integers
 * @args: va_list argument
 *
 * Return: number of characters printed to stdout
 */
int print_int(va_list args)
{
	int val = va_arg(args, int), count = 0;

	if (val < 0)
		count += _putchar('-');
	count += print_numbers(_abs(val));
	return (count);
}
