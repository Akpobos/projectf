#include "main.h"

/**
 * _abs - Return the absolute value of a number
 * @num: The number
 *
 * Return: The abs of the number
 */
int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}

/**
 * print_numbers - Prints numbers to stdout
 * @num: The number
 *
 * Return: number of character printed
 */
int print_numbers(int num)
{
	int count = 0;

	if (num > 9)
	{
		count += print_numbers(num / 10);
		count += _putchar((num % 10) + '0');
	}
	else
	{
		count += _putchar(num + '0');
	}
	return (count);
}

/**
 * fmt_space - Clean white space
 * @str: The buffer
 * @i: pointer to current position in buffer
 * Return: Nothing
 */
void fmt_space(const char *str, int *i)
{
	while (str[*i] == ' ')
		*i = *i + 1;
}

/**
 * print_binary - Prints binary of a number
 * @num: unsigned int number
 *
 * Return: printed count
 */
int print_binary(unsigned int num)
{
	int count = 0;

	if (num > 0)
	{
		count += print_binary(num / 2);
		count += _putchar((num % 2) + '0');
	}
	return (count);
}

/**
 * check_specifier - Handles specifiers
 * @c: The character
 * @count: pointer print count
 * @args: va_list argument
 * Return: Nothing
 */
void check_specifier(const char c, int *count, va_list args)
{
	int is_fnd;

	if (c == '%')
	{
		*count += _putchar(c);
	}
	else
	{
		is_fnd = print_fmt(c, args);
		if (is_fnd < 0)
		{
			*count += _putchar('%');
			*count += _putchar(c);
		}
		else
			*count += is_fnd;
	}
}
