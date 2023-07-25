#include "main.h"

/**
 * print_char - prints a character
 * @args: va_list argument
 * @buffer: The buffer
 * @buff_i: buffer count
 * Return: 1
 */
int print_char(va_list args, char *buffer, int *buff_i)
{
	return (add_buffer(va_arg(args, int), buffer, buff_i));
}

/**
 * print_str - Prints string
 * @args: va_list argument
 * @buffer: The buffer
 * @buff_i: buffer count
 * Return: numbers of character printed to stdout
 */
int print_str(va_list args, char *buffer, int *buff_i)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";
	while (str[i])
	{
		add_buffer(str[i], buffer, buff_i);
		i++;
	}
	return (i);
}

/**
 * print_int - Prints integers
 * @args: va_list argument
 * @buffer: The buffer
 * @buff_i: buffer count
 * Return: number of characters printed to stdout
 */
int print_int(va_list args, char *buffer, int *buff_i)
{
	int val = va_arg(args, int), count = 0;

	if (val < 0)
		count += add_buffer('-', buffer, buff_i);
	count += print_numbers(_abs(val), buffer, buff_i);
	return (count);
}

/**
 * print_bnry - Prints binary
 * @args: va_list argument
 * @buffer: The buffer
 * @buff_i: buffer count
 * Return: number of characer printed
 */
int print_bnry(va_list args, char *buffer, int *buff_i)
{
	unsigned int val = va_arg(args, unsigned int);

	return (print_binary(val, buffer, buff_i));
}

/**
 * print_u_int - Prints unsigned int
 * @args: va_list arguments
 * @buffer: The buffer
 * @buff_i: buffer count
 * Return: number of characters printed
 */
int print_u_int(va_list args, char *buffer, int *buff_i)
{
	unsigned int val = va_arg(args, unsigned int);

	return (print_numbers(val, buffer, buff_i));
}
