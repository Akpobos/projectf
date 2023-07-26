#include "main.h"
/**
 * run_hex - prints hex
 * @num: The number
 * @hex_case: upper or lower
 * @buffer: The buffer
 * @buff_i: buff index
 * Return: count
 */
int run_hex(unsigned int num, int hex_case, char *buffer, int *buff_i)
{
	unsigned int base = 10;
	int v = hex_case == 0 ? 'a' : 'A';

	if (num > 9)
	{
		return (add_buffer((num % base) + v, buffer, buff_i));
	}
	else
	{
		return (add_buffer(num + '0', buffer, buff_i));
	}
}

/**
 * print_h_u - Prints numbers to stdout
 * @num: The number
 * @buffer: The buffer
 * @buff_i: buffer count
 * Return: number of character printed
 */
int print_h_u(unsigned int num, char *buffer, int *buff_i)
{
	int count = 0;
	unsigned int base = 16;

	if (num > 15)
	{
		count += print_h_u(num / base, buffer, buff_i);
		count += run_hex(num % base, 1, buffer, buff_i);
	}
	else
	{
		count += run_hex(num, 1, buffer, buff_i);
	}
	return (count);
}
