#include "main.h"

/**
 * print_buffer - Prints buffer to stdout
 * @buffer: The buffer
 * @buff_i: current buffer index
 * Return: count
 */
int print_buffer(char *buffer, int *buff_i)
{
	int count = write(1, buffer, *buff_i);

	*buff_i = 0;
	return (count);
}

/**
 * add_buffer - Prints buffer to stdout
 * @c: Character to add to buffer
 * @buffer: The buffer
 * @buff_i: Current buffer index
 * Return: count of char printed to stdout
 */
int add_buffer(char c, char *buffer, int *buff_i)
{
	int count = 0;

	if (*buff_i == BUFFER_SIZE)
	{
		count += print_buffer(buffer, buff_i);
	}
	buffer[*buff_i] = c;
	*buff_i = *buff_i + 1;
	return (count);
}

/**
 * print_uint - Prints numbers to stdout
 * @num: The number
 * @buffer: The buffer
 * @buff_i: buffer count
 * Return: number of character printed
 */
int print_uint(unsigned int num, char *buffer, int *buff_i)
{
	int count = 0;
	unsigned int base = 10;

	if (num > 9)
	{
		count += print_uint(num / base, buffer, buff_i);
		count += add_buffer((num % base) + '0', buffer, buff_i);
	}
	else
	{
		count += add_buffer(num + '0', buffer, buff_i);
	}
	return (count);
}

/**
 * print_8 - Prints numbers to stdout
 * @num: The number
 * @buffer: The buffer
 * @buff_i: buffer count
 * Return: number of character printed
 */
int print_8(unsigned int num, char *buffer, int *buff_i)
{
	int count = 0;
	unsigned int base = 8;

	if(num > 7)
	{
		count += print_8(num / base, buffer, buff_i);
		count += add_buffer((num % base) + '0', buffer, buff_i);
	}
	else
	{
		count += add_buffer(num + '0', buffer, buff_i);
	}
	return (count);
}
