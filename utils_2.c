#include "main.h"

/**
 * print_buffer - Prints buffer to stdout
 * @buffer: The buffer
 * @buff_i: current buffer index
 * Return: count
 */
int print_buffer(char *buffer, int *buff_i)
{
	int count = write(1, buffer, (*buff_i));

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
		count = print_buffer(buffer, buff_i);
	}
	else
	{
		buffer[*buff_i] = c;
		*buff_i += 1;
	}
	return (count);
}
