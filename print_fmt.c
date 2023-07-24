#include "main.h"

/**
 * print_fmt - Select the right format and pring
 * @c: Character specifier
 * @args: va_list argument
 * Return: number of printed characters
 */
int print_fmt(char c, va_list args)
{
	fmt_t fmts[] = {
		{ 'c', print_char },
		{ 's', print_str },
		{ 'i', print_int },
		{ 'd', print_int }
	};
	int i = 0;

	while (i < 4)
	{
		if (fmts[i].c == c)
		{
			return (fmts[i].prnt(args));
		}
		i++;
	}
	return (0);
}
