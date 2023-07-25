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
 * @buffer: The buffer
 * @buff_i: buffer count
 * Return: number of character printed
 */
int print_numbers(int num, char *buffer, int *buff_i)
{
	int count = 0;

	if (num > 9)
	{
		count += print_numbers(num / 10, buffer, buff_i);
		count += add_buffer((num % 10) + '0', buffer, buff_i);
	}
	else
	{
		count += add_buffer(num + '0', buffer, buff_i);
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
 * @buffer: The buffer
 * @buff_i: buffer count
 * Return: printed count
 */
int print_binary(unsigned int num, char *buffer, int *buff_i)
{
	int count = 0;

	if (num > 0)
	{
		count += print_binary(num / 2, buffer, buff_i);
		count += add_buffer((num % 2) + '0', buffer, buff_i);
	}
	return (count);
}

/**
 * check_specifier - Handles specifiers
 * @c: The character
 * @count: pointer print count
 * @args: va_list argument
 * @buffer: local buffer
 * @buff_i: buffer index
 * Return: Nothing
 */
void check_specifier(
		const char c,
		int *count,
		va_list args,
		char *buffer,
		int *buff_i)
{
	int is_fnd;

	if (c == '%')
	{
		*count += add_buffer(c, buffer, buff_i);
	}
	else
	{
		is_fnd = print_fmt(c, args, buffer, buff_i);
		if (is_fnd < 0)
		{
			*count += add_buffer('%', buffer, buff_i);
			*count += add_buffer(c, buffer, buff_i);
		}
		else
			*count += is_fnd;
	}
}
