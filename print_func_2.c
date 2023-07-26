#include "main.h"

/**
 * print_octal - Prints a number in base8
 * @args: va_list argument
 * @buffer: buffer
 * @buff_i: index
 * Return: count
 */
int print_octal(va_list args, char *buffer, int *buff_i)
{
	unsigned int val = va_arg(args, unsigned int);

	return (print_8(val, buffer, buff_i));
}

/**
 * print_hex_lower - Prints a number in base15
 * @args: va_list argument
 * @buffer: buffer
 * @buff_i: index
 * Return: count
 */
int print_hex_lower(va_list args, char *buffer, int *buff_i)
{
	unsigned int val = va_arg(args, unsigned int);

	return (print_h_l(val, buffer, buff_i));
}

/**
 * print_hex_upper - Prints a number in base15
 * @args: va_list argument
 * @buffer: buffer
 * @buff_i: index
 * Return: count
 */
int print_hex_upper(va_list args, char *buffer, int *buff_i)
{
	unsigned int val = va_arg(args, unsigned int);

	return (print_h_u(val, buffer, buff_i));
}
