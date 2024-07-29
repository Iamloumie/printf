#include "main.h"

/**
 * print_c - prints a character.
 * @val: arguments.
 * @flag: the flag
 * Return: integer.
 */

int print_c(va_list val, int flag)
{
	char s;

	(void)flag;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}

