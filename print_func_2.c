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
